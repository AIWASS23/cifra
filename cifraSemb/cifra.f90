program VigenereCipher
    implicit none
    
    character(len=26) :: key = 'KEY'  ! Chave para cifrar, você pode alterar a chave aqui
    character(len=100) :: plaintext   ! Texto a ser cifrado
    character(len=100) :: ciphertext  ! Texto cifrado
    integer :: i, j, keylen, textlen
    
    integer function charToIndex(char)
        character :: char
        charToIndex = ichar(adjustl(char)) - ichar('A')
    end function charToIndex
    
    character function indexToChar(idx)
        integer :: idx
        indexToChar = char(mod(idx, 26) + ichar('A'))
    end function indexToChar
    
    print *, "Digite o texto a ser cifrado (somente letras maiúsculas, sem espaços): "
    read *, plaintext
    
    textlen = len(trim(plaintext))
    keylen = len_trim(key)
    
    do i = 1, textlen
        j = charToIndex(plaintext(i:i))
        if (j >= 0 .and. j <= 25) then
            ciphertext(i:i) = indexToChar(mod(charToIndex(key(mod(i - 1, keylen) + 1:1)) + j, 26))
        else
            ciphertext(i:i) = plaintext(i:i) ! Mantém caracteres não-alfabéticos inalterados
        end if
    end do
    
    print *, "Texto cifrado: ", ciphertext(1:textlen)
    
end program VigenereCipher

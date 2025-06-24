# file_enc_dec
Encrypts and Decrypts file or files in folder using key 
File Encryptor & Decryptor
Overview

This program allows you to encrypt and decrypt files securely using a provided key. It supports both single files and entire folders, making it flexible for various use cases.
Features

    🔐 Encrypt and decrypt individual files.

    📁 Encrypt and decrypt all files within a folder.

    🔑 Uses a user-provided key for both encryption and decryption.

    🧾 Adds suffix _e(n) to encrypted files to avoid overwriting originals.

Usage

./filecryptor -e|-d -k <key> <input_file_or_folder> <output_file_or_folder>

Arguments

    -e: Encrypt the specified file or folder.

    -d: Decrypt the specified file or folder.

    -k <key>: Provide the encryption/decryption key.

File Naming Convention

When encrypting files in a folder:

    Each output file will be named with _e suffix followed by an index number.

    Example: file.txt → file_e(1).txt, file_e(2).txt, etc.

Example

./filecryptor -e -k mySecretKey file.txt encrypted_file.txt
./filecryptor -d -k mySecretKey encrypted_file.txt decrypted_file.txt

Notes

    The program expects three arguments: the operation (-e or -d), the key (-k <key>), and the input/output files or folders.

    The first argument is always the program name itself (argv[0]), followed by user-provided arguments.


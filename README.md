# WhiteRabbit-Password-Generator
This is a password generator which helps to reach the root flag on HTB WhiteRabbit Box.

# Description
The WhiteRabbit's password for the sudo user is generated by a binary neo-password-generator which
has seeds based on a timestamp, including milliseconds. During progressing the box we find the actual
timestamp but we don't know exact time (with milliseconds). So, this simple script generates 1000 passwords
based on the known timestamp + milliseconds. We can later try to su manually or use other specific tools to
get sudo user.

# Usage
1. Compile .c file with gcc:

   ```gcc pass_gen.c -o pass_gen```

2. Generate 1000 possible passwords:

   ```./pass_gen > passwords.txt```

int main (int ac, char *av[], char *env[])
{
	execve("/bin/ls", argv, env);
}

.LC0:
	.string	"%lld"
.LC1:
	.string	"%lld\n"
	.globl	main
main:
	pushq	%rbp
	pushq	%rbx
	pushq	%rcx
	pushq	%r8
	pushq	%r9
	pushq	%r10
	pushq	%r11
	pushq	%r12
	pushq	%r13
	pushq	%r14
	pushq	%r15
	movq	%rsp, %rbp
	subq	$32, %rsp
	subq	$16, %rsp
	subq	$16, %rsp
	movq	-8(%rbp), %r8
	movq	$8, %rcx
	subq	$16, %rsp
	neg		%rcx
	leaq	(%rbp, %rcx), %rax
	neg		%rcx
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	call	__isoc99_scanf@PLT
	addq	$16, %rsp
	movq	-24(%rbp), %r8
	movq	$24, %rcx
	subq	$16, %rsp
	neg		%rcx
	leaq	(%rbp, %rcx), %rax
	neg		%rcx
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	call	__isoc99_scanf@PLT
	addq	$16, %rsp
	movq	-8(%rbp), %r8
	movq	$8, %rcx
	movq	-24(%rbp), %r9
	movq	$24, %rcx
	addq	%r9, %r8
	subq	$16, %rsp
	movq	%r8, -40(%rbp)
	movq	-40(%rbp), %r8
	movq	$40, %rcx
	subq	$16, %rsp
	movq	%r8, %rsi
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	addq	$16, %rsp
	movq	%rbp, %rsp
	popq	 %r15
	popq	 %r14
	popq	 %r13
	popq	 %r12
	popq	 %r11
	popq	 %r10
	popq	 %r9
	popq	 %r8
	popq	%rcx
	popq	%rbx
	popq	%rbp
	ret

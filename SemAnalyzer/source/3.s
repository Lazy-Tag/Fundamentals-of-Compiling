.LC0:
	.string	"%lld"
.LC1:
	.string	"%lld\n"
N:
	.long	10
	.comm	a,96,32
	.comm	b,96,32
	.comm	c,96,32
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
	movq	$0, %r8
	subq	$16, %rsp
	movq	%r8, -40(%rbp)
.L1:
	movq	-40(%rbp), %r8
	movq	$40, %rcx
	movq	-8(%rbp), %r9
	movq	$8, %rcx
	movq	$0, %rdx
	movq	$1, %rcx
	cmpq	%r9, %r8
	cmovl	%rcx, %rdx
	movq	%rdx, %r8
	movq	$0, %rcx
	cmpq	%r8, %rcx
	je	.L2
	movq	$0, %r8
	movq	-40(%rbp), %r9
	movq	$40, %rcx
	movq	$1, %rcx
	imulq	%rcx, %r9
	addq	%r9, %r8
	leaq	a(%rip), %rax
	movq	$8 , %rcx
	imulq	%rcx, %r8
	addq	$0, %r8
	addq	%r8, %rax
	movq	(%rax), %r9
	subq	$16, %rsp
	leaq	a(%rip), %rax
	addq	%r8, %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	call	__isoc99_scanf@PLT
	addq	$16, %rsp
	movq	-40(%rbp), %r8
	movq	$40, %rcx
	movq	-40(%rbp), %r9
	movq	$40, %rcx
	movq	$1, %r10
	addq	%r10, %r9
	neg		%rcx
	movq	%r9, -40(%rbp)
	neg		%rcx
	jmp	.L1
.L2:
	movq	-40(%rbp), %r8
	movq	$40, %rcx
	movq	$0, %r9
	neg		%rcx
	movq	%r9, -40(%rbp)
	neg		%rcx
.L3:
	movq	-40(%rbp), %r8
	movq	$40, %rcx
	movq	-24(%rbp), %r9
	movq	$24, %rcx
	movq	$0, %rdx
	movq	$1, %rcx
	cmpq	%r9, %r8
	cmovl	%rcx, %rdx
	movq	%rdx, %r8
	movq	$0, %rcx
	cmpq	%r8, %rcx
	je	.L4
	movq	$0, %r8
	movq	-40(%rbp), %r9
	movq	$40, %rcx
	movq	$1, %rcx
	imulq	%rcx, %r9
	addq	%r9, %r8
	leaq	b(%rip), %rax
	movq	$8 , %rcx
	imulq	%rcx, %r8
	addq	$0, %r8
	addq	%r8, %rax
	movq	(%rax), %r9
	subq	$16, %rsp
	leaq	b(%rip), %rax
	addq	%r8, %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	call	__isoc99_scanf@PLT
	addq	$16, %rsp
	movq	-40(%rbp), %r8
	movq	$40, %rcx
	movq	-40(%rbp), %r9
	movq	$40, %rcx
	movq	$1, %r10
	addq	%r10, %r9
	neg		%rcx
	movq	%r9, -40(%rbp)
	neg		%rcx
	jmp	.L3
.L4:
	movq	$0, %r8
	subq	$16, %rsp
	movq	%r8, -56(%rbp)
	movq	-40(%rbp), %r8
	movq	$40, %rcx
	movq	$0, %r9
	neg		%rcx
	movq	%r9, -40(%rbp)
	neg		%rcx
.L5:
	movq	-40(%rbp), %r8
	movq	$40, %rcx
	movq	-8(%rbp), %r9
	movq	$8, %rcx
	movq	$0, %rdx
	movq	$1, %rcx
	cmpq	%r9, %r8
	cmovl	%rcx, %rdx
	movq	%rdx, %r8
	movq	$0, %rcx
	cmpq	%r8, %rcx
	je	.L6
	movq	-56(%rbp), %r8
	movq	$56, %rcx
	movq	$0, %r9
	neg		%rcx
	movq	%r9, -56(%rbp)
	neg		%rcx
.L7:
	movq	-56(%rbp), %r8
	movq	$56, %rcx
	movq	-24(%rbp), %r9
	movq	$24, %rcx
	movq	$0, %rdx
	movq	$1, %rcx
	cmpq	%r9, %r8
	cmovl	%rcx, %rdx
	movq	%rdx, %r8
	movq	$0, %rcx
	cmpq	%r8, %rcx
	je	.L8
	movq	$0, %r8
	movq	-40(%rbp), %r9
	movq	$40, %rcx
	movq	$1, %rcx
	imulq	%rcx, %r9
	addq	%r9, %r8
	leaq	a(%rip), %rax
	movq	$8 , %rcx
	imulq	%rcx, %r8
	addq	$0, %r8
	addq	%r8, %rax
	movq	(%rax), %r9
	movq	$0, %r10
	movq	-56(%rbp), %r11
	movq	$56, %rcx
	movq	$1, %rcx
	imulq	%rcx, %r11
	addq	%r11, %r10
	leaq	b(%rip), %rax
	movq	$8 , %rcx
	imulq	%rcx, %r10
	addq	$0, %r10
	addq	%r10, %rax
	movq	(%rax), %r11
	imulq	%r11, %r9
	subq	$16, %rsp
	movq	%r9, -72(%rbp)
	movq	$0, %r8
	movq	-40(%rbp), %r9
	movq	$40, %rcx
	movq	-56(%rbp), %r11
	movq	$56, %rcx
	addq	%r11, %r9
	movq	$1, %rcx
	imulq	%rcx, %r9
	addq	%r9, %r8
	leaq	c(%rip), %rax
	movq	$8 , %rcx
	imulq	%rcx, %r8
	addq	$0, %r8
	addq	%r8, %rax
	movq	(%rax), %r9
	movq	$0, %r11
	movq	-40(%rbp), %r12
	movq	$40, %rcx
	movq	-56(%rbp), %r13
	movq	$56, %rcx
	addq	%r13, %r12
	movq	$1, %rcx
	imulq	%rcx, %r12
	addq	%r12, %r11
	leaq	c(%rip), %rax
	movq	$8 , %rcx
	imulq	%rcx, %r11
	addq	$0, %r11
	addq	%r11, %rax
	movq	(%rax), %r12
	movq	-72(%rbp), %r13
	movq	$72, %rcx
	addq	%r13, %r12
	leaq	c(%rip), %rax
	addq	%r8, %rax
	movq	%r12, (%rax)
	movq	-56(%rbp), %r8
	movq	$56, %rcx
	movq	-56(%rbp), %r9
	movq	$56, %rcx
	movq	$1, %r11
	addq	%r11, %r9
	neg		%rcx
	movq	%r9, -56(%rbp)
	neg		%rcx
	jmp	.L7
.L8:
	movq	-40(%rbp), %r8
	movq	$40, %rcx
	movq	-40(%rbp), %r9
	movq	$40, %rcx
	movq	$1, %r11
	addq	%r11, %r9
	neg		%rcx
	movq	%r9, -40(%rbp)
	neg		%rcx
	jmp	.L5
.L6:
	movq	-40(%rbp), %r8
	movq	$40, %rcx
	movq	$0, %r9
	neg		%rcx
	movq	%r9, -40(%rbp)
	neg		%rcx
.L9:
	movq	-40(%rbp), %r8
	movq	$40, %rcx
	movq	-8(%rbp), %r9
	movq	$8, %rcx
	movq	-24(%rbp), %r11
	movq	$24, %rcx
	addq	%r11, %r9
	movq	$1, %r11
	subq	%r11, %r9
	movq	$0, %rdx
	movq	$1, %rcx
	cmpq	%r9, %r8
	cmovl	%rcx, %rdx
	movq	%rdx, %r8
	movq	$0, %rcx
	cmpq	%r8, %rcx
	je	.L10
	movq	$0, %r8
	movq	-40(%rbp), %r9
	movq	$40, %rcx
	movq	$1, %rcx
	imulq	%rcx, %r9
	addq	%r9, %r8
	leaq	c(%rip), %rax
	movq	$8 , %rcx
	imulq	%rcx, %r8
	addq	$0, %r8
	addq	%r8, %rax
	movq	(%rax), %r9
	subq	$16, %rsp
	movq	%r9, %rsi
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	addq	$16, %rsp
	movq	-40(%rbp), %r8
	movq	$40, %rcx
	movq	-40(%rbp), %r9
	movq	$40, %rcx
	movq	$1, %r11
	addq	%r11, %r9
	neg		%rcx
	movq	%r9, -40(%rbp)
	neg		%rcx
	jmp	.L9
.L10:
	movq	$0, %r8
	movq	%r8, %rax
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

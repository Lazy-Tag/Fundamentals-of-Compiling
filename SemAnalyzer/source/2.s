.LC0:
	.string	"%lld"
.LC1:
	.string	"%lld\n"
N:
	.long	3
	.comm	a,160,32
	.globl	f
f:
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
	movq	 %rdi, -8(%rbp)
	movq	-8(%rbp), %r8
	movq	$8, %rcx
	movq	$1, %r9
	movq	$0, %rdx
	movq	$1, %rcx
	cmpq	%r9, %r8
	cmove	%rcx, %rdx
	movq	%rdx, %r8
	movq	$0, %rcx
	cmpq	%r8, %rcx
	je	.L1
	movq	$1, %r9
	movq	%r9, %rax
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
.L1:
	movq	$1, %r9
	subq	$16, %rsp
	movq	%r9, -24(%rbp)
	movq	-24(%rbp), %r9
	movq	$24, %rcx
	movq	-8(%rbp), %r10
	movq	$8, %rcx
	movq	-8(%rbp), %r11
	movq	$8, %rcx
	movq	$1, %r12
	subq	%r12, %r11
	movq	%r11, %rdi
	call	f
	imulq	%rax, %r10
	neg		%rcx
	movq	%r10, -24(%rbp)
	neg		%rcx
	movq	-24(%rbp), %r9
	movq	$24, %rcx
	movq	%r9, %rax
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
	movq	$10, %r8
	movq	%r8, %rdi
	call	f
	subq	$16, %rsp
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %r8
	movq	$8, %rcx
	movq	$3628800, %r9
	movq	$0, %rdx
	movq	$1, %rcx
	cmpq	%r9, %r8
	cmove	%rcx, %rdx
	movq	%rdx, %r8
	movq	-8(%rbp), %r9
	movq	$8, %rcx
	orq		%r9, %r8
	movq	$0, %rcx
	cmpq	%r8, %rcx
	je	.L2
	movq	$2333, %r9
	subq	$16, %rsp
	movq	%r9, %rsi
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	addq	$16, %rsp
	movq	-8(%rbp), %r9
	movq	$8, %rcx
	movq	$0, %rax
	movq	$1, %rcx
	cmpq	%r9, %rax
	cmove	%rcx, %rax
	movq	%rax, %r9
	movq	$0, %rcx
	cmpq	%r9, %rcx
	je	.L4
	movq	-8(%rbp), %r10
	movq	$8, %rcx
	movq	-8(%rbp), %r11
	movq	$8, %rcx
	movq	$10, %r12
	subq	%r12, %r11
	neg		%rcx
	movq	%r11, -8(%rbp)
	neg		%rcx
	jmp	.L5
.L4:
	movq	-8(%rbp), %r10
	movq	$8, %rcx
	movq	-8(%rbp), %r11
	movq	$8, %rcx
	movq	$10, %r12
	addq	%r12, %r11
	neg		%rcx
	movq	%r11, -8(%rbp)
	neg		%rcx
.L5:
	jmp	.L3
.L2:
	movq	-8(%rbp), %r10
	movq	$8, %rcx
	subq	$16, %rsp
	movq	%r10, %rsi
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	addq	$16, %rsp
.L3:
	movq	-8(%rbp), %r10
	movq	$8, %rcx
	subq	$16, %rsp
	movq	%r10, %rsi
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	addq	$16, %rsp
	movq	$0, %r10
	subq	$16, %rsp
	movq	%r10, -24(%rbp)
	movq	$0, %r10
	subq	$16, %rsp
	movq	%r10, -40(%rbp)
.L6:
	movq	-24(%rbp), %r10
	movq	$24, %rcx
	movq	$3, %r11
	movq	$0, %rcx
	movq	$0, %rdx
	movq	$1, %rcx
	cmpq	%r11, %r10
	cmovle	%rcx, %rdx
	movq	%rdx, %r10
	movq	$0, %rcx
	cmpq	%r10, %rcx
	je	.L7
	movq	-24(%rbp), %r10
	movq	$24, %rcx
	movq	$1, %r11
	movq	$0, %rdx
	movq	$1, %rcx
	cmpq	%r11, %r10
	cmove	%rcx, %rdx
	movq	%rdx, %r10
	movq	$0, %rcx
	cmpq	%r10, %rcx
	je	.L8
	movq	-24(%rbp), %r11
	movq	$24, %rcx
	movq	-24(%rbp), %r12
	movq	$24, %rcx
	movq	$1, %r13
	addq	%r13, %r12
	neg		%rcx
	movq	%r12, -24(%rbp)
	neg		%rcx
	jmp	.L6
.L8:
	movq	-24(%rbp), %r11
	movq	$24, %rcx
	movq	$3, %r12
	movq	$0, %rcx
	movq	$0, %rdx
	movq	$1, %rcx
	cmpq	%r12, %r11
	cmove	%rcx, %rdx
	movq	%rdx, %r11
	movq	$0, %rcx
	cmpq	%r11, %rcx
	je	.L9
	jmp	.L7
.L9:
	movq	-24(%rbp), %r12
	movq	$24, %rcx
	subq	$16, %rsp
	movq	%r12, %rsi
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	addq	$16, %rsp
	movq	-24(%rbp), %r12
	movq	$24, %rcx
	movq	-24(%rbp), %r13
	movq	$24, %rcx
	movq	$1, %r14
	addq	%r14, %r13
	neg		%rcx
	movq	%r13, -24(%rbp)
	neg		%rcx
	jmp	.L6
.L7:
	movq	$3, %r12
	movq	$0, %rcx
	movq	$3, %r12
	movq	$0, %rcx
	movq	$2, %r13
	imulq	%r13, %r12
	subq	$160, %rsp
	movq	-24(%rbp), %r12
	movq	$24, %rcx
	movq	$1, %r13
	neg		%rcx
	movq	%r13, -24(%rbp)
	neg		%rcx
	movq	-40(%rbp), %r12
	movq	$40, %rcx
	movq	-24(%rbp), %r13
	movq	$24, %rcx
	movq	-24(%rbp), %r14
	movq	$24, %rcx
	addq	%r14, %r13
	neg		%rcx
	movq	%r13, -40(%rbp)
	neg		%rcx
	movq	$0, %r12
	movq	$0, %r13
	movq	$6, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	$0, %r13
	movq	$1, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	$8 , %rcx
	imulq	%rcx, %r12
	addq	$56, %r12
	neg		%r12
	movq	(%rbp, %r12), %r13
	neg		%r12
	movq	-24(%rbp), %r14
	movq	$24, %rcx
	movq	-40(%rbp), %r15
	movq	$40, %rcx
	movq	$2, %rbx
	imulq	%rbx, %r15
	addq	%r15, %r14
	neg		%r12
	movq	%r14, (%rbp, %r12)
	neg		%r12
	movq	$0, %r12
	movq	-24(%rbp), %r13
	movq	$24, %rcx
	movq	$6, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	-40(%rbp), %r13
	movq	$40, %rcx
	movq	$1, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	$8 , %rcx
	imulq	%rcx, %r12
	addq	$56, %r12
	neg		%r12
	movq	(%rbp, %r12), %r13
	neg		%r12
	movq	$3, %r14
	neg		%r12
	movq	%r14, (%rbp, %r12)
	neg		%r12
	movq	$0, %r12
	movq	$0, %r13
	movq	$6, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	$0, %r13
	movq	$1, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	$8 , %rcx
	imulq	%rcx, %r12
	addq	$56, %r12
	neg		%r12
	movq	(%rbp, %r12), %r13
	neg		%r12
	subq	$16, %rsp
	movq	%r13, %rsi
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	addq	$16, %rsp
	movq	$0, %r12
	movq	-24(%rbp), %r13
	movq	$24, %rcx
	movq	$6, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	-40(%rbp), %r13
	movq	$40, %rcx
	movq	$1, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	$8 , %rcx
	imulq	%rcx, %r12
	addq	$56, %r12
	neg		%r12
	movq	(%rbp, %r12), %r13
	neg		%r12
	subq	$16, %rsp
	movq	%r13, %rsi
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	addq	$16, %rsp
	movq	$0, %r12
	movq	-24(%rbp), %r13
	movq	$24, %rcx
	movq	$6, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	-40(%rbp), %r13
	movq	$40, %rcx
	movq	$1, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	$8 , %rcx
	imulq	%rcx, %r12
	addq	$56, %r12
	neg		%r12
	movq	(%rbp, %r12), %r13
	neg		%r12
	movq	$0, %r14
	movq	$0, %r15
	movq	$6, %rcx
	imulq	%rcx, %r15
	addq	%r15, %r14
	movq	$0, %r15
	movq	$1, %rcx
	imulq	%rcx, %r15
	addq	%r15, %r14
	movq	$8 , %rcx
	imulq	%rcx, %r14
	addq	$56, %r14
	neg		%r14
	movq	(%rbp, %r14), %r15
	neg		%r14
	addq	%r15, %r13
	subq	$16, %rsp
	movq	%r13, -216(%rbp)
	movq	-216(%rbp), %r12
	movq	$216, %rcx
	subq	$16, %rsp
	movq	%r12, %rsi
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	addq	$16, %rsp
	movq	$0, %r12
	movq	$0, %r13
	movq	$6, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	$0, %r13
	movq	$1, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	leaq	a(%rip), %rax
	movq	$8 , %rcx
	imulq	%rcx, %r12
	addq	$0, %r12
	addq	%r12, %rax
	movq	(%rax), %r13
	movq	$5, %r15
	leaq	a(%rip), %rax
	addq	%r12, %rax
	movq	%r15, (%rax)
	movq	$0, %r12
	movq	$1, %r13
	movq	$6, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	$1, %r13
	movq	$1, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	leaq	a(%rip), %rax
	movq	$8 , %rcx
	imulq	%rcx, %r12
	addq	$0, %r12
	addq	%r12, %rax
	movq	(%rax), %r13
	movq	$2, %r15
	leaq	a(%rip), %rax
	addq	%r12, %rax
	movq	%r15, (%rax)
	movq	$0, %r12
	movq	$0, %r13
	movq	$6, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	$0, %r13
	movq	$1, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	leaq	a(%rip), %rax
	movq	$8 , %rcx
	imulq	%rcx, %r12
	addq	$0, %r12
	addq	%r12, %rax
	movq	(%rax), %r13
	subq	$16, %rsp
	movq	%r13, %rsi
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	addq	$16, %rsp
	movq	$0, %r12
	movq	$1, %r13
	movq	$6, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	$1, %r13
	movq	$1, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	leaq	a(%rip), %rax
	movq	$8 , %rcx
	imulq	%rcx, %r12
	addq	$0, %r12
	addq	%r12, %rax
	movq	(%rax), %r13
	subq	$16, %rsp
	movq	%r13, %rsi
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	addq	$16, %rsp
	movq	$0, %r12
	movq	$1, %r13
	movq	$6, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	$1, %r13
	movq	$1, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	leaq	a(%rip), %rax
	movq	$8 , %rcx
	imulq	%rcx, %r12
	addq	$0, %r12
	addq	%r12, %rax
	movq	(%rax), %r13
	subq	$16, %rsp
	leaq	a(%rip), %rax
	addq	%r12, %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	call	__isoc99_scanf@PLT
	addq	$16, %rsp
	movq	$0, %r12
	movq	$1, %r13
	movq	$6, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	movq	$1, %r13
	movq	$1, %rcx
	imulq	%rcx, %r13
	addq	%r13, %r12
	leaq	a(%rip), %rax
	movq	$8 , %rcx
	imulq	%rcx, %r12
	addq	$0, %r12
	addq	%r12, %rax
	movq	(%rax), %r13
	subq	$16, %rsp
	movq	%r13, %rsi
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	addq	$16, %rsp
	movq	$0, %r12
	movq	%r12, %rax
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

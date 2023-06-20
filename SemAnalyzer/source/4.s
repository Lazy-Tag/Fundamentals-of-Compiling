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
	movq	$6, %r8
	movq	$6, %r8
	subq	$304, %rsp
	movq	$1, %r8
	subq	$16, %rsp
	movq	%r8, -312(%rbp)
	movq	$1, %r8
	subq	$16, %rsp
	movq	%r8, -328(%rbp)
.L1:
	movq	-312(%rbp), %r8
	movq	$312, %rcx
	movq	$5, %r9
	movq	$0, %rdx
	movq	$1, %rcx
	cmpq	%r9, %r8
	cmovl	%rcx, %rdx
	movq	%rdx, %r8
	movq	-328(%rbp), %r9
	movq	$328, %rcx
	movq	$5, %r10
	movq	$0, %rdx
	movq	$1, %rcx
	cmpq	%r10, %r9
	cmovl	%rcx, %rdx
	movq	%rdx, %r9
	andq	%r9, %r8
	movq	$0, %rcx
	cmpq	%r8, %rcx
	je	.L2
	movq	$0, %r8
	movq	-312(%rbp), %r9
	movq	$312, %rcx
	movq	$6, %rcx
	imulq	%rcx, %r9
	addq	%r9, %r8
	movq	-328(%rbp), %r9
	movq	$328, %rcx
	movq	$1, %rcx
	imulq	%rcx, %r9
	addq	%r9, %r8
	movq	$8 , %rcx
	imulq	%rcx, %r8
	addq	$8, %r8
	neg		%r8
	movq	(%rbp, %r8), %r9
	neg		%r8
	movq	-312(%rbp), %r10
	movq	$312, %rcx
	movq	-328(%rbp), %r11
	movq	$328, %rcx
	addq	%r11, %r10
	neg		%r8
	movq	%r10, (%rbp, %r8)
	neg		%r8
	movq	-328(%rbp), %r8
	movq	$328, %rcx
	movq	-328(%rbp), %r9
	movq	$328, %rcx
	movq	$1, %r10
	addq	%r10, %r9
	neg		%rcx
	movq	%r9, -328(%rbp)
	neg		%rcx
	jmp	.L1
.L2:
.L3:
	movq	-312(%rbp), %r8
	movq	$312, %rcx
	movq	$5, %r9
	movq	$0, %rdx
	movq	$1, %rcx
	cmpq	%r9, %r8
	cmovl	%rcx, %rdx
	movq	%rdx, %r8
	movq	-328(%rbp), %r9
	movq	$328, %rcx
	movq	$6, %r10
	movq	$0, %rdx
	movq	$1, %rcx
	cmpq	%r10, %r9
	cmovl	%rcx, %rdx
	movq	%rdx, %r9
	andq	%r9, %r8
	movq	$0, %rcx
	cmpq	%r8, %rcx
	je	.L4
	movq	$0, %r8
	movq	-312(%rbp), %r9
	movq	$312, %rcx
	movq	$6, %rcx
	imulq	%rcx, %r9
	addq	%r9, %r8
	movq	-328(%rbp), %r9
	movq	$328, %rcx
	movq	$1, %rcx
	imulq	%rcx, %r9
	addq	%r9, %r8
	movq	$8 , %rcx
	imulq	%rcx, %r8
	addq	$8, %r8
	neg		%r8
	movq	(%rbp, %r8), %r9
	neg		%r8
	movq	-312(%rbp), %r10
	movq	$312, %rcx
	movq	-328(%rbp), %r11
	movq	$328, %rcx
	subq	%r11, %r10
	neg		%r8
	movq	%r10, (%rbp, %r8)
	neg		%r8
	movq	-312(%rbp), %r8
	movq	$312, %rcx
	movq	-312(%rbp), %r9
	movq	$312, %rcx
	movq	$1, %r10
	addq	%r10, %r9
	neg		%rcx
	movq	%r9, -312(%rbp)
	neg		%rcx
	jmp	.L3
.L4:
	movq	$0, %r8
	movq	$1, %r9
	movq	$6, %rcx
	imulq	%rcx, %r9
	addq	%r9, %r8
	movq	$1, %r9
	movq	$1, %rcx
	imulq	%rcx, %r9
	addq	%r9, %r8
	movq	$8 , %rcx
	imulq	%rcx, %r8
	addq	$8, %r8
	neg		%r8
	movq	(%rbp, %r8), %r9
	neg		%r8
	movq	$0, %r10
	movq	$1, %r11
	movq	$6, %rcx
	imulq	%rcx, %r11
	addq	%r11, %r10
	movq	$4, %r11
	movq	$1, %rcx
	imulq	%rcx, %r11
	addq	%r11, %r10
	movq	$8 , %rcx
	imulq	%rcx, %r10
	addq	$8, %r10
	neg		%r10
	movq	(%rbp, %r10), %r11
	neg		%r10
	addq	%r11, %r9
	movq	$0, %r8
	movq	$4, %r11
	movq	$6, %rcx
	imulq	%rcx, %r11
	addq	%r11, %r8
	movq	$5, %r11
	movq	$1, %rcx
	imulq	%rcx, %r11
	addq	%r11, %r8
	movq	$8 , %rcx
	imulq	%rcx, %r8
	addq	$8, %r8
	neg		%r8
	movq	(%rbp, %r8), %r11
	neg		%r8
	addq	%r11, %r9
	subq	$16, %rsp
	movq	%r9, %rsi
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

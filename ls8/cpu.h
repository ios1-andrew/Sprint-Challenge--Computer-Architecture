#ifndef _CPU_H_
#define _CPU_H_

// Holds all information about the CPU
struct cpu {
  // TODO
  // PC
  unsigned char PC;
  // registers (array)
  unsigned char registers[8];
  // ram (array)
  unsigned char ram[256];
  // flag
  unsigned char FL;
};

// ALU operations
enum alu_op {
	ALU_MUL,
	ALU_CMP,
	ALU_ADD,
	ALU_OR
	// Add more here
};

// Instructions

// These use binary literals. If these aren't available with your compiler, hex
// literals should be used.

#define LDI  0b10000010
#define HLT  0b00000001
#define PRN  0b01000111
#define MUL  0b10100010
#define PUSH 0b01000101
#define POP  0b01000110
#define CMP  0b10100111
#define JMP  0b01010100
#define JEQ	 0b01010101
#define JNE  0b01010110
#define ADD  0b10100000
#define OR   0b10101010

// Function declarations

extern void cpu_load(struct cpu *cpu, char *dir);
extern void cpu_init(struct cpu *cpu);
extern void cpu_run(struct cpu *cpu);

#endif

#define AMED_ARM_ARCH_VARIANT_MAX_TEXT_LENGTH (7 + 1)

typedef enum _amed_arm_arch_variant
{
  AMED_ARM_ARCH_VARIANT_NONE,
  AMED_ARM_ARCH_VARIANT_ARMv8,
  AMED_ARM_ARCH_VARIANT_ARMv8v1,
  AMED_ARM_ARCH_VARIANT_ARMv8v2,
  AMED_ARM_ARCH_VARIANT_ARMv8v3,
  AMED_ARM_ARCH_VARIANT_ARMv8v4,
  AMED_ARM_ARCH_VARIANT_ARMv8v5,
  AMED_ARM_ARCH_VARIANT_ARMv8v6,
} amed_arm_arch_variant;

#define AMED_ISA_MAX_TEXT_LENGTH (5 + 1)

typedef enum _amed_isa
{
  AMED_ISA_NONE,
  AMED_ISA_ARM,
  AMED_ISA_THUMB,
} amed_isa;

#define AMED_ISAFORM_MAX_TEXT_LENGTH (4 + 1)

typedef enum _amed_isaform
{
  AMED_ISAFORM_NONE,
  AMED_ISAFORM_T16,
  AMED_ISAFORM_T32,
  AMED_ISAFORM_A32,
  AMED_ISAFORM_A64,
} amed_isaform;

#define AMED_ARM_CONDITION_MAX_TEXT_LENGTH (4 + 1)

typedef enum _amed_arm_condition
{
  AMED_ARM_CONDITION_NONE,
  AMED_ARM_CONDITION_EQ,
  AMED_ARM_CONDITION_NE,
  AMED_ARM_CONDITION_CS,
  AMED_ARM_CONDITION_CC,
  AMED_ARM_CONDITION_MI,
  AMED_ARM_CONDITION_PL,
  AMED_ARM_CONDITION_VS,
  AMED_ARM_CONDITION_VC,
  AMED_ARM_CONDITION_HI,
  AMED_ARM_CONDITION_LS,
  AMED_ARM_CONDITION_GE,
  AMED_ARM_CONDITION_LT,
  AMED_ARM_CONDITION_GT,
  AMED_ARM_CONDITION_LE,
  AMED_ARM_CONDITION_AL,
  AMED_ARM_CONDITION_NV,
  AMED_ARM_CONDITION_HS,
  AMED_ARM_CONDITION_LO,
} amed_arm_condition;

#define AMED_SHIFT_MAX_TEXT_LENGTH (4 + 1)

typedef enum _amed_shift
{
  AMED_SHIFT_NONE,
  AMED_SHIFT_ASR,
  AMED_SHIFT_LSL,
  AMED_SHIFT_LSR,
  AMED_SHIFT_MSL,
  AMED_SHIFT_ROR,
  AMED_SHIFT_RRX,
  AMED_SHIFT_MUL,
  AMED_SHIFT_SXTB,
  AMED_SHIFT_SXTH,
  AMED_SHIFT_SXTW,
  AMED_SHIFT_SXTX,
  AMED_SHIFT_UXTB,
  AMED_SHIFT_UXTH,
  AMED_SHIFT_UXTW,
  AMED_SHIFT_UXTX,
} amed_shift;

#define AMED_ENDIAN_MAX_TEXT_LENGTH (4 + 1)

typedef enum _amed_endian
{
  AMED_ENDIAN_NONE,
  AMED_ENDIAN_LE,
  AMED_ENDIAN_BE,
} amed_endian;

#define AMED_MEM_ACCESS_MAX_TEXT_LENGTH (14 + 1)

typedef enum _amed_mem_access
{
  AMED_MEM_ACCESS_NONE,
  AMED_MEM_ACCESS_ACQUIRE,
  AMED_MEM_ACCESS_RELEASE,
  AMED_MEM_ACCESS_LORELEASE,
  AMED_MEM_ACCESS_LOACQUIRE,
  AMED_MEM_ACCESS_ATOMIC,
  AMED_MEM_ACCESS_ATOMIC_RELEASE,
  AMED_MEM_ACCESS_ATOMIC_ACQUIRE,
  AMED_MEM_ACCESS_UNPRIVILEGED,
} amed_mem_access;

#define AMED_DATATYPE_MAX_TEXT_LENGTH (5 + 1)

typedef enum _amed_datatype
{
  AMED_DATATYPE_NONE,
  AMED_DATATYPE_F16,
  AMED_DATATYPE_BF16,
  AMED_DATATYPE_F32,
  AMED_DATATYPE_F64,
  AMED_DATATYPE_F80,
  AMED_DATATYPE_BCD80,
  AMED_DATATYPE_I8,
  AMED_DATATYPE_I16,
  AMED_DATATYPE_I32,
  AMED_DATATYPE_I64,
  AMED_DATATYPE_I128,
  AMED_DATATYPE_I256,
  AMED_DATATYPE_S8,
  AMED_DATATYPE_S16,
  AMED_DATATYPE_S32,
  AMED_DATATYPE_S64,
  AMED_DATATYPE_U8,
  AMED_DATATYPE_U16,
  AMED_DATATYPE_U32,
  AMED_DATATYPE_U64,
  AMED_DATATYPE_U128,
  AMED_DATATYPE_U256,
  AMED_DATATYPE_P8,
  AMED_DATATYPE_P64,
  AMED_DATATYPE_IX,
  AMED_DATATYPE_SX,
  AMED_DATATYPE_UX,
} amed_datatype;

#define AMED_ARM_BARRIER_MAX_TEXT_LENGTH (5 + 1)

typedef enum _amed_arm_barrier
{
  AMED_ARM_BARRIER_NONE,
  AMED_ARM_BARRIER_SY,
  AMED_ARM_BARRIER_ST,
  AMED_ARM_BARRIER_SYST,
  AMED_ARM_BARRIER_LD,
  AMED_ARM_BARRIER_ISH,
  AMED_ARM_BARRIER_ISHST,
  AMED_ARM_BARRIER_ISHLD,
  AMED_ARM_BARRIER_NSH,
  AMED_ARM_BARRIER_NSHST,
  AMED_ARM_BARRIER_NSHLD,
  AMED_ARM_BARRIER_OSH,
  AMED_ARM_BARRIER_OSHST,
  AMED_ARM_BARRIER_OSHLD,
} amed_arm_barrier;

#define AMED_ARM_CSPACE_MAX_TEXT_LENGTH (4 + 1)

typedef enum _amed_arm_cspace
{
  AMED_ARM_CSPACE_NONE,
  AMED_ARM_CSPACE_C0,
  AMED_ARM_CSPACE_C1,
  AMED_ARM_CSPACE_C2,
  AMED_ARM_CSPACE_C3,
  AMED_ARM_CSPACE_C4,
  AMED_ARM_CSPACE_C5,
  AMED_ARM_CSPACE_C6,
  AMED_ARM_CSPACE_C7,
  AMED_ARM_CSPACE_C8,
  AMED_ARM_CSPACE_C9,
  AMED_ARM_CSPACE_C10,
  AMED_ARM_CSPACE_C11,
  AMED_ARM_CSPACE_C12,
  AMED_ARM_CSPACE_C13,
  AMED_ARM_CSPACE_C14,
  AMED_ARM_CSPACE_C15,
} amed_arm_cspace;

#define AMED_ARM_PSPACE_MAX_TEXT_LENGTH (4 + 1)

typedef enum _amed_arm_pspace
{
  AMED_ARM_PSPACE_NONE,
  AMED_ARM_PSPACE_P0,
  AMED_ARM_PSPACE_P1,
  AMED_ARM_PSPACE_P2,
  AMED_ARM_PSPACE_P3,
  AMED_ARM_PSPACE_P4,
  AMED_ARM_PSPACE_P5,
  AMED_ARM_PSPACE_P6,
  AMED_ARM_PSPACE_P7,
  AMED_ARM_PSPACE_P8,
  AMED_ARM_PSPACE_P9,
  AMED_ARM_PSPACE_P10,
  AMED_ARM_PSPACE_P11,
  AMED_ARM_PSPACE_P12,
  AMED_ARM_PSPACE_P13,
  AMED_ARM_PSPACE_P14,
  AMED_ARM_PSPACE_P15,
} amed_arm_pspace;

#define AMED_CATEGORY_MAX_TEXT_LENGTH (15 + 1)

typedef enum _amed_category
{
  AMED_CATEGORY_ADVSIMD,
  AMED_CATEGORY_APP,
  AMED_CATEGORY_ARITHMETIC,
  AMED_CATEGORY_ATOMIC,
  AMED_CATEGORY_BINARY,
  AMED_CATEGORY_BITFIELD,
  AMED_CATEGORY_BITWISE,
  AMED_CATEGORY_BRANCH,
  AMED_CATEGORY_BROADCASTING,
  AMED_CATEGORY_CALL,
  AMED_CATEGORY_CARITHMETIC,
  AMED_CATEGORY_CARRY,
  AMED_CATEGORY_COMPARISON,
  AMED_CATEGORY_COMPLEX,
  AMED_CATEGORY_CONDITIONALLY,
  AMED_CATEGORY_CONTROL_FLOW,
  AMED_CATEGORY_CONVERSION,
  AMED_CATEGORY_CRYPTO,
  AMED_CATEGORY_DATA_TRANSFER,
  AMED_CATEGORY_DEBUG,
  AMED_CATEGORY_DECIMAL,
  AMED_CATEGORY_DOT_PRODUCT,
  AMED_CATEGORY_EMATH,
  AMED_CATEGORY_EXCEPTION,
  AMED_CATEGORY_EXTRACTION,
  AMED_CATEGORY_FAR,
  AMED_CATEGORY_FLOAT,
  AMED_CATEGORY_FPSIMD,
  AMED_CATEGORY_FUSED_OP,
  AMED_CATEGORY_GENERAL,
  AMED_CATEGORY_HALT,
  AMED_CATEGORY_HALVING,
  AMED_CATEGORY_HINT,
  AMED_CATEGORY_INC_DEC,
  AMED_CATEGORY_INSERTION,
  AMED_CATEGORY_LOAD,
  AMED_CATEGORY_LOGICAL,
  AMED_CATEGORY_LOGICAL_FP,
  AMED_CATEGORY_MASK,
  AMED_CATEGORY_MATH,
  AMED_CATEGORY_MIN_MAX,
  AMED_CATEGORY_MISC,
  AMED_CATEGORY_NEAR,
  AMED_CATEGORY_NOP,
  AMED_CATEGORY_OS,
  AMED_CATEGORY_PAC,
  AMED_CATEGORY_POLYNOMIAL,
  AMED_CATEGORY_PREFETCH,
  AMED_CATEGORY_RANDOM,
  AMED_CATEGORY_RET,
  AMED_CATEGORY_ROTATE_LEFT,
  AMED_CATEGORY_ROTATE_RIGHT,
  AMED_CATEGORY_ROUNDING,
  AMED_CATEGORY_SATURATING,
  AMED_CATEGORY_SELECTION,
  AMED_CATEGORY_SET,
  AMED_CATEGORY_SETCC,
  AMED_CATEGORY_SHIFT_LEFT,
  AMED_CATEGORY_SHIFT_RIGHT,
  AMED_CATEGORY_SHORT,
  AMED_CATEGORY_SIGNED,
  AMED_CATEGORY_SIGN_EXTEND,
  AMED_CATEGORY_SIMD,
  AMED_CATEGORY_STACK_TRANSFER,
  AMED_CATEGORY_STAT,
  AMED_CATEGORY_STORE,
  AMED_CATEGORY_STRING,
  AMED_CATEGORY_SVE,
  AMED_CATEGORY_SWIZZLE,
  AMED_CATEGORY_SYSCALL,
  AMED_CATEGORY_SYSRET,
  AMED_CATEGORY_SYSTEM,
  AMED_CATEGORY_TABLE_LOOKUP,
  AMED_CATEGORY_TAGS,
  AMED_CATEGORY_TRIGONOMETRIC,
  AMED_CATEGORY_UNCONDITIONALLY,
  AMED_CATEGORY_UNDEFINED,
  AMED_CATEGORY_UNSIGNED,
  AMED_CATEGORY_VAES,
} amed_category;

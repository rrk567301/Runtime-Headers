@class NSData, NSMutableArray;

@interface KextAuditIntelBootSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned char csrStatus;
@property unsigned int csrConfig;
@property unsigned int imkTypeTag;
@property BOOL sipStatus;
@property BOOL secureBoot;
@property BOOL valid;
@property (retain) NSData *kernelCDHash;
@property (retain) NSMutableArray *kexts;
@property (retain) NSMutableArray *errors;
@property (readonly) int instanceTag;

- (BOOL)isValid;
- (void)invalidate:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)reset;
- (BOOL)hasKernel;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)dictionary;
- (void).cxx_destruct;
- (int)addKext:(id)a0;
- (id)initAsValid:(BOOL)a0 withKernelHash:(id)a1 andKexts:(id)a2 andErrors:(id)a3 andSIPStatus:(BOOL)a4 andSecureBootStatus:(BOOL)a5 andCSRConfigStatus:(unsigned char)a6 andCSRConfig:(unsigned int)a7 andTypeTag:(unsigned int)a8;
- (BOOL)xpcDictionary:(id *)a0;

@end

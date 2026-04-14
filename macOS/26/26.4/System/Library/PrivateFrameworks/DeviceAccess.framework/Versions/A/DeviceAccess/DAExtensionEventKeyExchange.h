@class DACryptoInfo;

@interface DAExtensionEventKeyExchange : DAEventExtension

@property (copy, nonatomic) DACryptoInfo *cryptoInfo;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithEventType:(long long)a0 device:(id)a1 cryptoInfo:(id)a2;

@end

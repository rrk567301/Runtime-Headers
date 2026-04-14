@class NSString, NSData;

@interface DAExtensionEventKeyExchange : DAEventExtension

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSData *context;
@property (copy, nonatomic) NSData *publicKey;

+ (BOOL)supportsSecureCoding;

- (id)descriptionWithLevel:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDevice:(id)a0 publicKey:(id)a1;
- (id)initWithDevice:(id)a0 publicKey:(id)a1 context:(id)a2;

@end

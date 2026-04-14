@class NSData, NSString;

@interface DACryptoInfo : NSObject <CUXPCCodable, NSSecureCoding, DAKeychainCodable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *accessoryKey;
@property (nonatomic) unsigned long long ciphersuite;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSData *info;
@property (copy, nonatomic) NSData *privateKey;
@property (copy, nonatomic) NSData *publicKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keychainType;

- (id)descriptionWithLevel:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;

@end

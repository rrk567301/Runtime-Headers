@class NSManagedObjectContext, NSString;

@interface ICDataCryptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSManagedObjectContext *context;
@property (retain, nonatomic) NSString *objectIdentifier;

- (id)initWithCoder:(id)a0;
- (id)encryptData:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)decryptData:(id)a0;
- (id)initWithObjectIdentifier:(id)a0;
- (id)initWithObjectIdentifier:(id)a0 context:(id)a1;

@end

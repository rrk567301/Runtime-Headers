@class NSManagedObjectContext, NSString;

@interface ICDataCryptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSManagedObjectContext *context;
@property (retain, nonatomic) NSString *objectIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)encryptData:(id)a0;
- (id)decryptData:(id)a0;
- (id)initWithObjectIdentifier:(id)a0;
- (id)initWithObjectIdentifier:(id)a0 context:(id)a1;

@end

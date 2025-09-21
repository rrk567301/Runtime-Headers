@class NSString, ICEncryptionKey;

@interface ICCryptoConvergenceControllerConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *passphrase;
@property (copy, nonatomic) ICEncryptionKey *v1MainKey;
@property (copy, nonatomic) ICEncryptionKey *v1NeoMainKey;
@property (copy, nonatomic) NSString *divergedPassphrase;
@property (copy, nonatomic) ICEncryptionKey *divergedV1MainKey;
@property (copy, nonatomic) ICEncryptionKey *divergedV1NeoMainKey;
@property (nonatomic) char includeAllAuthenticatedObjects;
@property (nonatomic, getter=isUserInitiated) char userInitiated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)shouldConvergeObject:(id)a0;

@end

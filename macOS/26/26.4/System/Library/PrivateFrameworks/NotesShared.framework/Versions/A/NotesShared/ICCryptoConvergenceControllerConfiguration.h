@class NSString, ICEncryptionKey;

@interface ICCryptoConvergenceControllerConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *passphrase;
@property (copy, nonatomic) ICEncryptionKey *v1MainKey;
@property (copy, nonatomic) ICEncryptionKey *v1NeoMainKey;
@property (copy, nonatomic) NSString *divergedPassphrase;
@property (copy, nonatomic) ICEncryptionKey *divergedV1MainKey;
@property (copy, nonatomic) ICEncryptionKey *divergedV1NeoMainKey;
@property (nonatomic) BOOL includeAllAuthenticatedObjects;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)shouldConvergeObject:(id)a0;

@end

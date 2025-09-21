@class NSString;

@interface RMManagedTrustStoreController : NSObject

@property (nonatomic) long long scope;
@property (copy, nonatomic) NSString *personaID;

+ (id)newManagedTrustStoreControllerProtocolForScope:(long long)a0 personaID:(id)a1;

- (void).cxx_destruct;
- (id)initWithScope:(long long)a0 personaID:(id)a1;
- (char)removeTrustForCertificateRef:(id)a0 configurationKey:(id)a1 fullTrust:(char)a2 error:(id *)a3;
- (char)setTrustForCertificateRef:(id)a0 configurationKey:(id)a1 fullTrust:(char)a2 error:(id *)a3;

@end

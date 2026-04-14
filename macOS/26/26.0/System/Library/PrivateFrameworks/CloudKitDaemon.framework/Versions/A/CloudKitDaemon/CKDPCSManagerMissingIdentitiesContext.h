@class CKDContainer, CKDAccount, NSMutableSet;

@interface CKDPCSManagerMissingIdentitiesContext : NSObject

@property (retain, nonatomic) CKDAccount *account;
@property (retain, nonatomic) NSMutableSet *servicesWithMissingIdentities;
@property (retain, nonatomic) NSMutableSet *missingIdentityPublicKeys;
@property (weak, nonatomic) CKDContainer *container;

- (id)initWithContainer:(id)a0;
- (void).cxx_destruct;
- (id)copyOfMissingIdentityPublicKeys;
- (id)copyOfServicesWithMissingIdentities;

@end

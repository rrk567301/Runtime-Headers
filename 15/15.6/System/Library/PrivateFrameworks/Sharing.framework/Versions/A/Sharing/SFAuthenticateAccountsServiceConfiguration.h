@class NSSet;

@interface SFAuthenticateAccountsServiceConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned int serviceType;
@property (nonatomic) unsigned int targetedAccountTypes;
@property (copy, nonatomic) NSSet *existingAccountsIdentifiers;
@property (nonatomic) char isHomeSharingSetupNeeded;
@property (nonatomic) char isHomeKitSetupNeeded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end

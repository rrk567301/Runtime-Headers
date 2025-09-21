@class CNManagedConfiguration, NSObject, CNContactsEnvironment;
@protocol OS_tcc_identity;

@interface CNContactStoreConfiguration : NSObject

@property (retain, nonatomic) CNContactsEnvironment *environment;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (nonatomic) char isContactProvider;
@property (nonatomic) char leaveSingleStoresUnwrapped;
@property (nonatomic) char includeLocalContacts;
@property (nonatomic) char includeSuggestedContacts;
@property (nonatomic) char includeDonatedContacts;
@property (nonatomic) char includeIncludeManagedAppleIDs;
@property (nonatomic) char includeSharedPhotoContacts;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (nonatomic) char useOutOfProcessMapperExclusively;
@property (nonatomic) char useInProcessMapperExclusively;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end

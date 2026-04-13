@class CNManagedConfiguration, NSObject, CNContactsEnvironment;
@protocol OS_tcc_identity;

@interface CNDataMapperConfiguration : NSObject

@property (retain, nonatomic) CNContactsEnvironment *environment;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;

- (id)description;
- (void).cxx_destruct;
- (id)initWithContactStoreConfiguration:(id)a0;

@end

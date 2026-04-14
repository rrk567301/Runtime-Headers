@class CNContactStoreConfiguration, NSArray;

@interface QPAccountsManager : NSObject

@property (retain, nonatomic) CNContactStoreConfiguration *contactsConfiguration;
@property (retain, nonatomic) NSArray *accountTypes;
@property (retain) NSArray *contentsArray;

+ (id)sharedAccountsManager;

- (void).cxx_destruct;
- (void)update:(id)a0;
- (id)nameToEmailAddresses;

@end

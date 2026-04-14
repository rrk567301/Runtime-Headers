@class CNContactStoreConfiguration, NSArray, NSDictionary;

@interface QPAccountsManager : NSObject

@property (retain, nonatomic) CNContactStoreConfiguration *contactsConfiguration;
@property (retain, nonatomic) NSArray *accountTypes;
@property (retain) NSArray *contentsArray;
@property (retain) NSDictionary *meCard;

+ (id)sharedAccountsManager;

- (void)update:(id)a0;
- (void).cxx_destruct;
- (id)getMeCard;
- (id)nameToEmailAddresses;

@end

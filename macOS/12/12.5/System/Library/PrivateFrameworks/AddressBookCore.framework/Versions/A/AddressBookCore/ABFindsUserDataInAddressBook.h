@class ABAccount, NSArray, CNLazyArray, ABAddressBook;

@interface ABFindsUserDataInAddressBook : NSObject {
    ABAddressBook *_addressBook;
    ABAccount *_account;
    NSArray *_people;
    ABAddressBook *_addressBookForSeededCards;
    CNLazyArray *_seedCards;
}

@property (readonly) BOOL hasUserData;

- (void).cxx_destruct;
- (id)people;
- (id)initWithAddressBook:(id)a0 account:(id)a1;
- (void)setUpSeedCards;
- (BOOL)_hasUserGroups;
- (BOOL)_hasUserPeople;
- (BOOL)_hasMeCard;
- (BOOL)_hasSeededMarketingCard;
- (id)seedCards;

@end

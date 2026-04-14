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
- (id)seedCards;
- (void)setUpSeedCards;
- (BOOL)_hasUserPeople;
- (BOOL)_hasUserGroups;
- (BOOL)_hasSeededMarketingCard;
- (BOOL)_hasMeCard;

@end

@class ABAccount, NSArray, CNLazyArray, ABAddressBook;

@interface ABFindsUserDataInAddressBook : NSObject {
    ABAddressBook *_addressBook;
    ABAccount *_account;
    NSArray *_people;
    ABAddressBook *_addressBookForSeededCards;
    CNLazyArray *_seedCards;
}

@property (readonly) char hasUserData;

- (void).cxx_destruct;
- (id)people;
- (char)_hasMeCard;
- (char)_hasSeededMarketingCard;
- (char)_hasUserGroups;
- (char)_hasUserPeople;
- (id)initWithAddressBook:(id)a0 account:(id)a1;
- (id)seedCards;
- (void)setUpSeedCards;

@end

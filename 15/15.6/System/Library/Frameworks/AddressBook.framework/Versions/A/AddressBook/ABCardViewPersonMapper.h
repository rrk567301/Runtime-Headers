@class CNMultiDictionary, NSDictionary, CNContact;
@protocol CNUIParentContainerCache;

@interface ABCardViewPersonMapper : NSObject

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) id<CNUIParentContainerCache> parentContainerCache;
@property (retain, nonatomic) CNMultiDictionary *linkedIdentifierMap;
@property (readonly, nonatomic) NSDictionary *containerByContactIdentifier;

- (void).cxx_destruct;
- (id)contacts;
- (id)contactIdentifiers;
- (id)contactWithIdentifier:(id)a0;
- (char)isUnified;
- (id)initWithContact:(id)a0 parentContainerCache:(id)a1;
- (char)canCreateContactsInContainerOfContactWithIdentifier:(id)a0;
- (char)canCreateCustomLabelsInContainerOfContactWithIdentifier:(id)a0;
- (id)contactsUnifiedUnderMultiValueWithIdentifier:(id)a0 forDisplayedKey:(id)a1;
- (id)containerForContactWithIdentifier:(id)a0;
- (id)identifiersOfContactsUnifiedUnderMultiValueWithIdentifier:(id)a0 forDisplayedKey:(id)a1;
- (id)identifiersOfValuesUnifiedUnderMultiValueWithIdentifier:(id)a0 forDisplayedKey:(id)a1;
- (char)isDirectoryContainerForContactWithIdentifier:(id)a0;
- (char)isExchangeContainerForContactWithIdentifier:(id)a0;
- (id)nameOfContainerForContactWithIdentifier:(id)a0;
- (id)searchForContactsUnifiedUnderMultiValueWithIdentifier:(id)a0 forDisplayedKey:(id)a1;

@end

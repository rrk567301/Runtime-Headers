@class CNContactStore, WFCNContact, NSArray;

@interface WFCNContactStore : WFContactStore

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) WFCNContact *currentUserWFCNContact;
@property (retain, nonatomic) NSArray *cachedAllUsedLabels;

- (id)initWithContactStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)contactWithIdentifier:(id)a0;
- (id)contactsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)addContact:(id)a0 error:(id *)a1;
- (id)allContactsWithSortOrder:(long long)a0;
- (id)allContactsWithSortOrder:(long long)a0 passingTest:(id /* block */)a1;
- (id)allUsedRelationLabels;
- (id)contactsWithName:(id)a0;
- (id)contactsWithName:(id)a0 keysToFetch:(id)a1;
- (id)currentUserContact;
- (id)firstContactWithEmailAddress:(id)a0;
- (id)firstContactWithPhoneNumber:(id)a0;
- (id)firstContactWithPredicate:(id)a0 propertyID:(int)a1 valueEqualityBlock:(id /* block */)a2;

@end

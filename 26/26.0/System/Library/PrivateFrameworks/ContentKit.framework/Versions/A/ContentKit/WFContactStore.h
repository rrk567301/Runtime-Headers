@interface WFContactStore : NSObject

+ (id)new;
+ (Class)preferredConcreteSubclass;

- (id)init;
- (id)contactWithIdentifier:(id)a0;
- (id)contactsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)addContact:(id)a0 error:(id *)a1;
- (id)allContactsWithSortOrder:(long long)a0;
- (id)allContactsWithSortOrder:(long long)a0 passingTest:(id /* block */)a1;
- (id)allUsedRelationLabels;
- (id)contactsWithName:(id)a0;
- (id)currentUserContact;
- (id)firstContactWithEmailAddress:(id)a0;
- (id)firstContactWithPhoneNumber:(id)a0;

@end

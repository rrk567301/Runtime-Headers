@interface SSContactStore : NSObject

+ (id)contactStore;
+ (void)initialize;
+ (void)precacheContactsForResults:(id)a0;
+ (id)contactWithEmailForMailResults:(id)a0;
+ (void)_clearCachedContacts;
+ (id)_contactWithEmail:(id)a0 keysToFetch:(id)a1;
+ (id)_contactsWithEmails:(id)a0 keysToFetch:(id)a1;
+ (id)_contactsWithIds:(id)a0;
+ (id)_defaultKeysForContactByIdentifier;
+ (id)contactForContactIdentifier:(id)a0;
+ (id)contactWithEmail:(id)a0;

@end

@interface CNContactUpdatesReflector : NSObject

+ (void)reflectUpdatesMadeToContacts:(id)a0 onPersonsInAddressBook:(id)a1;
+ (id)contactFromCoreDataContact:(id)a0 withKeys:(id)a1;

@end

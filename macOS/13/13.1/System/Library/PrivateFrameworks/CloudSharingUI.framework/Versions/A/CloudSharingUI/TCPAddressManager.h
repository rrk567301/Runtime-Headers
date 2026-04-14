@interface TCPAddressManager : NSObject

+ (id)groupsMatchingString:(id)a0;
+ (id)_addressBookRecordsForFirstName:(id)a0 lastName:(id)a1;
+ (id)addAddressToAddressBook:(id)a0;
+ (id)addEmailAddressToCardMatchingFirstAndLastNameFromFormattedAddress:(id)a0;
+ (id)expandGroups:(id)a0;
+ (void)_addEmailsFromGroup:(id)a0 toDictionary:(id)a1;
+ (id)emailAddressesFromGroup:(id)a0;

@end

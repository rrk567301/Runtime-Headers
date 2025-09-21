@class NSString;

@interface NSSharingAddressBookNameExtractor : NSObject {
    NSString *_storageString;
}

+ (id)partialSurnames;
+ (id)extractorWithString:(id)a0;
+ (id)formattedAddressWithName:(id)a0 email:(id)a1 useQuotes:(char)a2;
+ (id)nameExtensions;
+ (id)nameExtensionsThatDoNotNeedCommas;
+ (id)formattedPhoneNumbersForPerson:(id)a0;
+ (id)formattedAddressesForPerson:(id)a0 useSimpleDescriptionForPrimaryAddress:(char)a1;

- (void).cxx_destruct;
- (id)addressComment;
- (id)addressDomain;
- (char)appearsToBeAnInitial;
- (id)componentsSeparatedByCharactersRespectingQuotesAndParens:(id)a0;
- (id)componentsSeparatedByCommaRespectingQuotesAndParens;
- (void)firstName:(id *)a0 middleName:(id *)a1 lastName:(id *)a2 extension:(id *)a3;
- (char)firstNameShouldBeFirst;
- (id)searchStringComponents;
- (id)uncommentedAddress;
- (id)uncommentedAddressRespectingGroups;
- (id)matchingPersonsWithEmailAddress;
- (id)matchingPersons;
- (id)_matchingPersonsBestMatchOnly:(char)a0;
- (id)addressList;
- (id)bestMatchingPerson;
- (id)matchingPersonsWithEmailAddressOrPhoneNumbers;

@end

@class NSString;

@interface NSSharingAddressBookNameExtractor : NSObject {
    NSString *_storageString;
}

+ (id)extractorWithString:(id)a0;
+ (id)nameExtensions;
+ (id)partialSurnames;
+ (id)nameExtensionsThatDoNotNeedCommas;
+ (id)formattedAddressWithName:(id)a0 email:(id)a1 useQuotes:(BOOL)a2;
+ (id)formattedPhoneNumbersForPerson:(id)a0;
+ (id)formattedAddressesForPerson:(id)a0 useSimpleDescriptionForPrimaryAddress:(BOOL)a1;

- (void).cxx_destruct;
- (void)firstName:(id *)a0 middleName:(id *)a1 lastName:(id *)a2 extension:(id *)a3;
- (id)uncommentedAddress;
- (id)addressComment;
- (BOOL)firstNameShouldBeFirst;
- (BOOL)appearsToBeAnInitial;
- (id)componentsSeparatedByCharactersRespectingQuotesAndParens:(id)a0;
- (id)uncommentedAddressRespectingGroups;
- (id)componentsSeparatedByCommaRespectingQuotesAndParens;
- (id)searchStringComponents;
- (id)addressDomain;
- (id)_matchingPersonsBestMatchOnly:(BOOL)a0;
- (id)matchingPersons;
- (id)addressList;
- (id)bestMatchingPerson;
- (id)matchingPersonsWithEmailAddress;
- (id)matchingPersonsWithEmailAddressOrPhoneNumbers;

@end

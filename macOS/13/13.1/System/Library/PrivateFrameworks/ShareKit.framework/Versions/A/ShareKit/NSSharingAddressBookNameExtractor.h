@class NSString;

@interface NSSharingAddressBookNameExtractor : NSObject {
    NSString *_storageString;
}

+ (id)extractorWithString:(id)a0;
+ (id)nameExtensions;
+ (id)nameExtensionsThatDoNotNeedCommas;
+ (id)partialSurnames;
+ (id)formattedAddressWithName:(id)a0 email:(id)a1 useQuotes:(BOOL)a2;
+ (id)formattedPhoneNumbersForPerson:(id)a0;
+ (id)formattedAddressesForPerson:(id)a0 useSimpleDescriptionForPrimaryAddress:(BOOL)a1;

- (void).cxx_destruct;
- (BOOL)appearsToBeAnInitial;
- (id)uncommentedAddress;
- (id)uncommentedAddressRespectingGroups;
- (id)addressComment;
- (BOOL)firstNameShouldBeFirst;
- (void)firstName:(id *)a0 middleName:(id *)a1 lastName:(id *)a2 extension:(id *)a3;
- (id)componentsSeparatedByCommaRespectingQuotesAndParens;
- (id)componentsSeparatedByCharactersRespectingQuotesAndParens:(id)a0;
- (id)searchStringComponents;
- (id)addressDomain;
- (id)addressList;
- (id)_matchingPersonsBestMatchOnly:(BOOL)a0;
- (id)bestMatchingPerson;
- (id)matchingPersons;
- (id)matchingPersonsWithEmailAddress;
- (id)matchingPersonsWithEmailAddressOrPhoneNumbers;

@end

@class NSString;

@interface SGTNameExtractor : NSObject {
    NSString *_storageString;
}

+ (id)partialSurnames;
+ (id)extractorWithString:(id)a0;
+ (id)formattedAddressWithName:(id)a0 email:(id)a1 useQuotes:(char)a2;
+ (id)nameExtensions;
+ (id)nameExtensionsThatDoNotNeedCommas;

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

@end

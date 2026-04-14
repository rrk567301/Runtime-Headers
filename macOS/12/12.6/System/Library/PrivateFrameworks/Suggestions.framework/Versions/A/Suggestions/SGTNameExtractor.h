@class NSString;

@interface SGTNameExtractor : NSObject {
    NSString *_storageString;
}

+ (id)extractorWithString:(id)a0;
+ (id)nameExtensions;
+ (id)partialSurnames;
+ (id)nameExtensionsThatDoNotNeedCommas;
+ (id)formattedAddressWithName:(id)a0 email:(id)a1 useQuotes:(BOOL)a2;

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

@end

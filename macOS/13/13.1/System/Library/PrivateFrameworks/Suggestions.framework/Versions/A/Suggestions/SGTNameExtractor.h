@class NSString;

@interface SGTNameExtractor : NSObject {
    NSString *_storageString;
}

+ (id)extractorWithString:(id)a0;
+ (id)nameExtensions;
+ (id)nameExtensionsThatDoNotNeedCommas;
+ (id)partialSurnames;
+ (id)formattedAddressWithName:(id)a0 email:(id)a1 useQuotes:(BOOL)a2;

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

@end

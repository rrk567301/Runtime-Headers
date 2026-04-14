@class NSString, NSArray, NSData, NSURL, NSDictionary;

@interface ABCDSocialProfile : ABCDOwnedObject

@property (copy) NSString *bundleIdentifiersString;
@property (copy) NSString *username;
@property (copy) NSString *displayname;
@property (copy) NSString *userIdentifier;
@property (copy) NSString *urlString;
@property (copy) NSString *serviceName;
@property (copy) NSArray *bundleIdentifiers;
@property (copy) NSString *teamIdentifier;
@property (copy) NSData *customValuesData;
@property (retain, nonatomic) NSURL *url;
@property (copy) NSDictionary *customValues;
@property (copy) NSString *displayValue;

+ (id)keyPathsForValuesAffectingBundleIdentifiers;
+ (id)builtInSocialProfileServices;
+ (id)privateKeysForPublicKeys;
+ (id)keyPathsForValuesAffectingUrl;
+ (id)keyPathsForValuesAffectingCustomValues;
+ (BOOL)isStandardServiceName:(id)a0;
+ (id)keyPathsForValuesAffectingDisplayValue;

- (id)dictionaryRepresentation;
- (void)willSave;
- (BOOL)abHasAddressBookRelatedContent;
- (void)_sanitizeServiceName;
- (void)_sanitizeUsername;
- (void)_synthesizeURL;
- (void)_makeSureItsLabeled;
- (void)_normalizeValues;
- (BOOL)_synthesizeURLFromUserName;
- (BOOL)_synthesizeURLFromUserIdentifier;
- (void)clearURL;
- (void)applyDictionaryRepresentation:(id)a0;

@end

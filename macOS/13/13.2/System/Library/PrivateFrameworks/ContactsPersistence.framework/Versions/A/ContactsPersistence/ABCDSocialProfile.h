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
+ (id)keyPathsForValuesAffectingUrl;
+ (id)keyPathsForValuesAffectingCustomValues;
+ (id)privateKeysForPublicKeys;
+ (BOOL)isStandardServiceName:(id)a0;
+ (id)keyPathsForValuesAffectingDisplayValue;

- (id)dictionaryRepresentation;
- (void)willSave;
- (BOOL)abHasAddressBookRelatedContent;
- (void)_sanitizeUsername;
- (void)_sanitizeServiceName;
- (void)_makeSureItsLabeled;
- (void)_normalizeValues;
- (void)_synthesizeURL;
- (BOOL)_synthesizeURLFromUserName;
- (BOOL)_synthesizeURLFromUserIdentifier;
- (void)clearURL;
- (void)applyDictionaryRepresentation:(id)a0;

@end

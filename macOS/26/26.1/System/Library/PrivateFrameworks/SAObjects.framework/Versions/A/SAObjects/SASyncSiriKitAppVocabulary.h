@class NSString, NSDictionary;

@interface SASyncSiriKitAppVocabulary : SADomainObject

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSDictionary *customVocabularyMap;

- (id)encodedClassName;
- (id)groupIdentifier;

@end

@class NSDictionary, NSArray;

@interface AKFailureInjectionConfig : AKDictionaryBackedModel

@property (readonly, nonatomic) long long scenario;
@property (readonly, nonatomic) NSDictionary *systemFailures;
@property (readonly, nonatomic) NSArray *allowedDomains;

- (id)headerRepresentationForRequestURL:(id)a0;
- (id)validationRequirements;

@end

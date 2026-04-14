@interface IMDSpotlightDataProvider : NSObject

+ (id)_dataProviders;
+ (id)_createDataProviders;
+ (id)dataProviderForIdentifier:(id)a0;

- (id)typeIdentifier;
- (id)dataForGUID:(id)a0 error:(id *)a1;

@end

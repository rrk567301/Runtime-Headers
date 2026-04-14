@class NSDictionary;

@interface UAFAssetSetExperimentConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *assetSpecifiers;

+ (BOOL)isValid:(id)a0 error:(id *)a1;
+ (id)fromContentsOfURL:(id)a0 error:(id *)a1;
+ (id)supportedFileVersions;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end

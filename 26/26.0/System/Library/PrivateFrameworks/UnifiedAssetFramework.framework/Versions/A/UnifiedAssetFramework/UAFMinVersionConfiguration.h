@class NSString, NSDictionary;

@interface UAFMinVersionConfiguration : NSObject

@property (retain, nonatomic) NSString *assetSetName;
@property (retain, nonatomic) NSDictionary *minVersions;

+ (BOOL)isValid:(id)a0 error:(id *)a1;
+ (id)fromContentsOfURL:(id)a0 error:(id *)a1;
+ (id)supportedFileVersions;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end

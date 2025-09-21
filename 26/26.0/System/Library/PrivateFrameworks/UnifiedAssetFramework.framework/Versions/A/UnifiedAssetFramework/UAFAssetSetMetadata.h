@class NSString;

@interface UAFAssetSetMetadata : NSObject

@property (retain, nonatomic) NSString *minOSVersion;
@property (retain, nonatomic) NSString *maxOSVersion;
@property (retain, nonatomic) NSString *thirdPartyCompatibilityVersion;

+ (id)OSVersion;
+ (BOOL)isValid:(id)a0 error:(id *)a1;
+ (id)OSThirdPartyCompatibilityVersion:(id)a0;
+ (id)fromAssetDir:(id)a0 error:(id *)a1;
+ (id)fromContentsOfURL:(id)a0 error:(id *)a1;
+ (id)supportedFileVersions;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)OSSupported:(id)a0;

@end

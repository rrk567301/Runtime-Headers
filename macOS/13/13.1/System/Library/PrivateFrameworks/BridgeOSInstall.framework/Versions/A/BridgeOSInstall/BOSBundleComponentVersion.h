@class NSString, NSDictionary;

@interface BOSBundleComponentVersion : NSObject

@property (retain) NSString *shortVersionString;
@property (retain) NSString *bundleVersion;
@property (retain) NSString *sourceVersion;
@property (retain) NSString *buildVersion;
@property (readonly) NSDictionary *attributeDictionary;

+ (id)bundleComponentVersionWithOnDiskBundle:(id)a0;
+ (id)_combinedVersionAndInfoDictionaryForBundle:(id)a0;
+ (id)_combinedVersionAndInfoDictionaryForCFBundle:(struct __CFBundle { } *)a0;
+ (id)_orderedVersionKeys;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0;
- (id)initWithShortVersionString:(id)a0 bundleVersion:(id)a1 sourceVersion:(id)a2 buildVersion:(id)a3;
- (void)_setBuildVersion:(id)a0;

@end

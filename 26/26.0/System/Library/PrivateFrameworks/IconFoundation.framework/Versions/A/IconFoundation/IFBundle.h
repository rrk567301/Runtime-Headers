@class NSString, NSDictionary, NSURL, IFPlistParser;

@interface IFBundle : NSObject

@property struct __CFBundle { } *bundle;
@property (retain, nonatomic) IFPlistParser *plistParser;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSString *bundleID;
@property (readonly, copy) NSURL *assetCatalogURL;
@property (readonly, copy) NSDictionary *iconDictionary;
@property (readonly, getter=isCoreTypes) BOOL coreTypes;
@property (readonly) unsigned long long platform;

+ (id)frameworkBundle;
+ (id)bundleWithURL:(id)a0;
+ (id)mainBundle;
+ (id)iconsetResourceAssetsCatalogURL;
+ (id)coreTypesBundle;
+ (id)appIconOverrideBundle;
+ (id)coreGlyphsBundle;
+ (id)coreGlyphsPrivateBundle;
+ (id)frameworkLocalizedString:(id)a0;
+ (id)iconFoundationFrameworkBundle;
+ (id)iconsetResourceBundle;
+ (id)mobileIconsFrameworkBundle;
+ (unsigned long long)platformFromDyldPlatform:(unsigned int)a0;

- (void)dealloc;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithCFBundle:(struct __CFBundle { } *)a0;
- (id)URLForResource:(id)a0 withExtension:(id)a1;
- (id)URLForResource:(id)a0 withExtension:(id)a1 subdirectory:(id)a2;
- (id)URLsForResourcesWithExtension:(id)a0 subdirectory:(id)a1;
- (id)URLForResource:(id)a0;
- (id)URLsForResources:(id)a0;
- (unsigned long long)platformForICC;

@end

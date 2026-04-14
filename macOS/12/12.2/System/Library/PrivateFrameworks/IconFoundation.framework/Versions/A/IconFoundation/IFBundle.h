@class NSDictionary, NSURL, NSString;

@interface IFBundle : NSObject

@property struct __CFBundle { } *bundle;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSString *bundleID;
@property (readonly, copy) NSURL *assetCatalogURL;
@property (readonly, copy) NSDictionary *iconDictionary;
@property (readonly, getter=isCoreTypes) BOOL coreTypes;

+ (id)mainBundle;
+ (id)bundleWithURL:(id)a0;
+ (id)iconsetResourceBundle;
+ (id)frameworkBundle;
+ (id)iconFoundationFrameworkBundle;
+ (id)mobileIconsFrameworkBundle;
+ (id)coreTypesBundle;
+ (id)coreGlyphsBundle;
+ (id)coreGlyphsPrivateBundle;
+ (id)appIconOverrideBundle;
+ (id)iconsetResourceAssetsCatalogURL;
+ (id)frameworkLocalizedString:(id)a0;

- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)URLForResource:(id)a0 withExtension:(id)a1;
- (id)URLForResource:(id)a0 withExtension:(id)a1 subdirectory:(id)a2;
- (id)URLsForResourcesWithExtension:(id)a0 subdirectory:(id)a1;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)initWithCFBundle:(struct __CFBundle { } *)a0;
- (id)URLForResource:(id)a0;

@end

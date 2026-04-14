@class NSMutableDictionary, NSString, NSURL, NSSet, NSCache;

@interface KHCatalogBundle : NSObject {
    NSMutableDictionary *_themePreviewIdentifiersBySortOrderByCategoryId;
    NSMutableDictionary *_productCodesByThemesKey;
    NSCache *_categoriesCache;
    NSCache *_categoriesForRecordIdCache;
    NSSet *_remoteThemePreviewIdentifiers;
    NSSet *_remoteThemeIdentifiers;
    NSSet *_localThemePreviewIdentifiers;
    NSSet *_localThemeIdentifiers;
}

@property (retain, nonatomic) NSMutableDictionary *rootDictionary;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *allKey;

+ (id)languageSpecificCountryCodes;

- (id)description;
- (id)initWithContentsOfURL:(id)a0;
- (void).cxx_destruct;
- (id)version;
- (BOOL)commonInit;
- (id)records;
- (id)categories;
- (id)manifestURL;
- (id)bundleAttributes;
- (id)themePreviewIdentifiers;
- (id)themeIdentifiers;
- (id)internalVersion;
- (BOOL)hasLanguageSpecificPreviews;
- (id)previewPackageIdentifierForBundleIdentifier:(id)a0;
- (id)packageIdentifierForBundleIdentifier:(id)a0;
- (id)packageIdentifierByBundleIdentifier;
- (id)productCodesByThemePreviewIdentifiers;
- (id)productCodesForThemePreviewIdentifier:(id)a0;
- (id)recordsByThemePreviewIdentifier;
- (id)recordsForCategory:(id)a0;
- (id)categoriesForRecordId:(id)a0;
- (id)themePreviewIdentifiersBySortOrderForCategory:(id)a0;
- (BOOL)themePreviewIdentifierIsVisible:(id)a0 category:(id)a1;
- (id)_visibleSortedThemePreviewIdentifiers;
- (id)_allThemePreviewIdentifiers;
- (id)allCategoryKeyId;
- (id)_recordForThemePreviewIdentifier:(id)a0;
- (id)_themeIdentifiersLocal:(BOOL)a0 isPreview:(BOOL)a1;
- (id)remoteThemeIdentifiers;
- (id)localThemeIdentifiers;
- (id)remoteThemePreviewsIdentifiers;
- (id)localThemePreviewIdentifiers;
- (BOOL)isBundleIdentifierLocal:(id)a0;
- (BOOL)isPreviewBundleIdentifierLocal:(id)a0;
- (id)themeVersionForThemePreviewIdentifier:(id)a0;
- (id)themePreviewVersionForThemePreviewIdentifier:(id)a0;

@end

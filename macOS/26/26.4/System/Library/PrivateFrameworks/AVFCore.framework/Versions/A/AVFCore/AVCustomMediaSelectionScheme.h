@class NSDictionary, NSArray, AVWeakReference;

@interface AVCustomMediaSelectionScheme : NSObject <NSCopying> {
    AVWeakReference *_weakReferenceToGroup;
    NSArray *_options;
    NSArray *_mediaPresentationSelectors;
    NSArray *_availableLanguageTags;
    NSDictionary *_decorationCharacteristicsForLanguages;
    NSDictionary *_languageDecorationDisplayNames;
    BOOL _shouldOfferLanguageSelection;
}

@property (readonly, nonatomic) NSDictionary *decorationCharacteristicsForLanguages;
@property (readonly, nonatomic) NSDictionary *languageDecorationDisplayNames;
@property (readonly) BOOL shouldOfferLanguageSelection;
@property (readonly) NSArray *availableLanguages;
@property (readonly) NSArray *selectors;

- (id)group;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)_selectorForSetting:(id)a0;
- (id)displayNameForLanguage:(id)a0 localeIdentifier:(id)a1;
- (id)initWithGroup:(id)a0 figAssetMediaSelectionGroupCustomMediaSelectionScheme:(id)a1;
- (id)mediaPresentationSettingsForSelector:(id)a0 complementaryToLanguage:(id)a1 settings:(id)a2;

@end

@class NSArray, AVWeakReference;

@interface AVCustomMediaSelectionScheme : NSObject <NSCopying> {
    AVWeakReference *_weakReferenceToGroup;
    NSArray *_options;
    NSArray *_mediaPresentationSelectors;
    NSArray *_availableLanguageTags;
    BOOL _shouldOfferLanguageSelection;
}

@property (readonly) BOOL shouldOfferLanguageSelection;
@property (readonly) NSArray *availableLanguages;
@property (readonly) NSArray *selectors;

- (id)group;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)dealloc;
- (id)_selectorForSetting:(id)a0;
- (id)initWithGroup:(id)a0 figAssetMediaSelectionGroupCustomMediaSelectionScheme:(id)a1;
- (id)mediaPresentationSettingsForSelector:(id)a0 complementaryToLanguage:(id)a1 settings:(id)a2;

@end

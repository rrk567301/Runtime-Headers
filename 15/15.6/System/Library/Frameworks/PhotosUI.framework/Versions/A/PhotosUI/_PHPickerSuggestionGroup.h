@class NSArray;

@interface _PHPickerSuggestionGroup : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) _PHPickerSuggestionGroup *wallpaperSuggestionGroup;
@property (class, readonly, nonatomic) _PHPickerSuggestionGroup *shuffleWallpaperSuggestionGroup;
@property (class, readonly, nonatomic) _PHPickerSuggestionGroup *portraitWallpaperSuggestionGroup;
@property (class, readonly, nonatomic) _PHPickerSuggestionGroup *livePhotoWallpaperSuggestionGroup;
@property (class, readonly, nonatomic) _PHPickerSuggestionGroup *deviceOwnerSuggestionGroup;
@property (class, readonly, nonatomic) _PHPickerSuggestionGroup *stickersSuggestionGroup;
@property (class, readonly, nonatomic) _PHPickerSuggestionGroup *watchWallpaperSuggestionGroup;
@property (class, readonly, nonatomic) _PHPickerSuggestionGroup *generativeSuggestionGroup;
@property (class, readonly, nonatomic) _PHPickerSuggestionGroup *styleabilitySuggestionGroup;
@property (class, readonly, nonatomic) _PHPickerSuggestionGroup *retailExperienceSuggestionGroup;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) long long defaultSuggestionIndex;
@property (readonly, nonatomic) id defaultSuggestion;
@property (readonly, nonatomic) char isForWallpaper;

+ (id)assetCollectionSuggestionGroup:(id)a0 extendedCuratedAssetsOnly:(char)a1 shouldReverseSortOrder:(char)a2;
+ (id)_wallpaperSuggestionGroupWithDefaultSuggestionIndex:(long long)a0;
+ (id)_wallpaperSuggestionGroupWithDefaultSuggestionIndex:(long long)a0 allowSettlingEffectSuggestions:(char)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithSuggestions:(id)a0 defaultSuggestionIndex:(long long)a1 isForWallpaper:(char)a2;

@end

@class NSArray, AVMediaSelectionOption, AVMediaSelectionGroupInternal;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {
    AVMediaSelectionGroupInternal *_mediaSelectionGroup;
}

@property (readonly, nonatomic) NSArray *options;
@property (readonly, nonatomic) AVMediaSelectionOption *defaultOption;
@property (readonly, nonatomic) BOOL allowsEmptySelection;

+ (id)mediaSelectionGroupWithAsset:(id)a0 dictionary:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 filteredAndSortedAccordingToPreferredLanguages:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 withAnyMediaCharacteristicFromArray:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 withLocale:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 withMediaCharacteristics:(id)a1;
+ (id)mediaSelectionOptionsFromArray:(id)a0 withoutMediaCharacteristics:(id)a1;
+ (id)playableMediaSelectionOptionsFromArray:(id)a0;

- (id)_weakReference;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_groupMediaCharacteristics;
- (id)mediaSelectionOptionWithPropertyListMatchToMediaSelectionArray:(id)a0;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)init;
- (id)_groupID;
- (BOOL)_isStreamingGroup;
- (id)description;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;
- (id)asset;
- (id)customMediaSelectionScheme;
- (id)dictionary;
- (id)_groupMediaType;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1 audioCompositionPresetIndex:(id)a2;
- (BOOL)_matchesGroupID:(id)a0 mediaType:(id)a1;
- (id)_primaryMediaCharacteristic;
- (id)currentBundleIdentifier;
- (id)optionsWithEnhancedIntelligibilityOfSpeech;
- (void)setCurrentBundleIdentifier:(id)a0;

@end

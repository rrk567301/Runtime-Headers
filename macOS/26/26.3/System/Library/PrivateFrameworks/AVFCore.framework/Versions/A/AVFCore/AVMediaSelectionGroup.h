@class NSArray, AVMediaSelectionOption, AVMediaSelectionGroupInternal;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {
    AVMediaSelectionGroupInternal *_mediaSelectionGroup;
}

@property (readonly, nonatomic) NSArray *mediaSelectionOptionsWithEnhancedIntelligibilityOfSpeech;
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

- (id)_groupMediaType;
- (id)_groupID;
- (id)_weakReference;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)asset;
- (id)description;
- (id)init;
- (id)_groupMediaCharacteristics;
- (id)dictionary;
- (id)mediaSelectionOptionWithPropertyListMatchToMediaSelectionArray:(id)a0;
- (BOOL)_isStreamingGroup;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1 audioCompositionPresetIndex:(id)a2;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;
- (id)customMediaSelectionScheme;
- (BOOL)_matchesGroupID:(id)a0 mediaType:(id)a1;
- (id)_primaryMediaCharacteristic;
- (id)currentBundleIdentifier;
- (id)mediaSelectionOptionComplementaryToOption:(id)a0 forMediaCharacteristic:(id)a1;
- (void)setCurrentBundleIdentifier:(id)a0;

@end

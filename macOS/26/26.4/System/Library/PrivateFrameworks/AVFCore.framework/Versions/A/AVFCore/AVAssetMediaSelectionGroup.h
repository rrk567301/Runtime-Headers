@class AVAsset, NSDictionary, NSArray, AVCustomMediaSelectionScheme, AVMediaSelectionOption;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_groupMediaCharacteristics;
    NSDictionary *_localizedMediaSelectionOptionDisplayNames;
    AVCustomMediaSelectionScheme *_customMediaSelectionScheme;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
    BOOL _isStreamingGroup;
}

- (id)defaultOption;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;
- (id)_mediaSelectionOptionWithPropertyList:(id)a0 matchToMediaSelectionArray:(BOOL)a1;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1 audioCompositionPresetIndex:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)mediaSelectionOptionWithPropertyListMatchToMediaSelectionArray:(id)a0;
- (id)options;
- (id)customMediaSelectionScheme;
- (unsigned long long)hash;
- (BOOL)_isStreamingGroup;
- (id)init;
- (id)asset;
- (id)_groupMediaCharacteristics;
- (id)_optionWithID:(id)a0 identifier:(id)a1 source:(id)a2 displaysNonForcedSubtitles:(BOOL)a3 audioCompositionPresetIndex:(id)a4;
- (id)dictionary;
- (id)initWithAsset:(id)a0 dictionary:(id)a1;
- (void)dealloc;

@end

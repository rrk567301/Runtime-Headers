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

- (id)dictionary;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1 audioCompositionPresetIndex:(id)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)customMediaSelectionScheme;
- (id)initWithAsset:(id)a0 dictionary:(id)a1;
- (id)_mediaSelectionOptionWithPropertyList:(id)a0 matchToMediaSelectionArray:(BOOL)a1;
- (BOOL)_isStreamingGroup;
- (id)options;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)mediaSelectionOptionWithPropertyListMatchToMediaSelectionArray:(id)a0;
- (id)asset;
- (id)_groupMediaCharacteristics;
- (id)init;
- (id)defaultOption;
- (id)_optionWithID:(id)a0 identifier:(id)a1 source:(id)a2 displaysNonForcedSubtitles:(BOOL)a3 audioCompositionPresetIndex:(id)a4;
- (void)dealloc;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;

@end

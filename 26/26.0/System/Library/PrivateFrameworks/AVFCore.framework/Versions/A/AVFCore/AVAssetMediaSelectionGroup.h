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

- (void)dealloc;
- (id)options;
- (id)_groupMediaCharacteristics;
- (id)defaultOption;
- (id)mediaSelectionOptionWithPropertyListMatchToMediaSelectionArray:(id)a0;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)init;
- (id)_optionWithID:(id)a0 identifier:(id)a1 source:(id)a2 displaysNonForcedSubtitles:(BOOL)a3 audioCompositionPresetIndex:(id)a4;
- (BOOL)_isStreamingGroup;
- (id)_mediaSelectionOptionWithPropertyList:(id)a0 matchToMediaSelectionArray:(BOOL)a1;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;
- (id)asset;
- (id)customMediaSelectionScheme;
- (id)dictionary;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithAsset:(id)a0 dictionary:(id)a1;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1 audioCompositionPresetIndex:(id)a2;

@end

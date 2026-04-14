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

- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)asset;
- (id)_mediaSelectionOptionWithPropertyList:(id)a0 matchToMediaSelectionArray:(BOOL)a1;
- (id)init;
- (id)_groupMediaCharacteristics;
- (id)initWithAsset:(id)a0 dictionary:(id)a1;
- (id)_optionWithID:(id)a0 identifier:(id)a1 source:(id)a2 displaysNonForcedSubtitles:(BOOL)a3 audioCompositionPresetIndex:(id)a4;
- (id)defaultOption;
- (id)dictionary;
- (id)mediaSelectionOptionWithPropertyListMatchToMediaSelectionArray:(id)a0;
- (id)options;
- (BOOL)_isStreamingGroup;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1 audioCompositionPresetIndex:(id)a2;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;
- (id)customMediaSelectionScheme;

@end

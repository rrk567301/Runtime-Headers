@class AVAsset, NSDictionary, NSArray, AVMediaSelectionOption;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_groupMediaCharacteristics;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
    BOOL _isStreamingGroup;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)dictionary;
- (id)options;
- (id)asset;
- (id)defaultOption;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;
- (id)_groupMediaCharacteristics;
- (BOOL)_isStreamingGroup;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1;
- (id)initWithAsset:(id)a0 dictionary:(id)a1;
- (id)_optionWithID:(id)a0 identifier:(id)a1 source:(id)a2 displaysNonForcedSubtitles:(BOOL)a3;

@end

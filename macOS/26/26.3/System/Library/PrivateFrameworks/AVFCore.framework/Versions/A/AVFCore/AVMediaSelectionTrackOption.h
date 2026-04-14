@class NSArray, AVAssetTrack, NSDictionary, AVWeakReference, NSNumber;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
    id _groupID;
    AVAssetTrack *_track;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    BOOL _displaysNonForcedSubtitles;
    NSNumber *_audioCompositionPresetIndex;
    NSArray *_audioCompositionPresetIndexesForFallbackIDs;
}

- (id)group;
- (int)trackID;
- (id)commonMetadata;
- (id)metadataForFormat:(id)a0;
- (BOOL)isPlayable;
- (id)_groupID;
- (id)availableMetadataFormats;
- (id)mediaType;
- (id)dictionary;
- (void)dealloc;
- (id)locale;
- (BOOL)isEqual:(id)a0;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (unsigned long long)hash;
- (id)_audioCompositionPresetIndex;
- (id)_audioCompositionPresetIndexesForFallbackIDs;
- (id)_track;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (BOOL)displaysNonForcedSubtitles;
- (id)mediaSubTypes;
- (id)track;

@end

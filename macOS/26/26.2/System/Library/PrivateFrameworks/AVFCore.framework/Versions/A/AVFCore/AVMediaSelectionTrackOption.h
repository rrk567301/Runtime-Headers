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

- (id)locale;
- (id)group;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (int)trackID;
- (id)dictionary;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isPlayable;
- (id)_groupID;
- (id)mediaType;
- (void)dealloc;
- (id)_audioCompositionPresetIndex;
- (id)_audioCompositionPresetIndexesForFallbackIDs;
- (id)_track;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (BOOL)displaysNonForcedSubtitles;
- (id)mediaSubTypes;
- (id)track;

@end

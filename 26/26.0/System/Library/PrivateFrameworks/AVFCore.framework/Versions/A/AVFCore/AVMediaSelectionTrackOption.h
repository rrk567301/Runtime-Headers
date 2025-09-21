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

- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)locale;
- (BOOL)isPlayable;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (id)metadataForFormat:(id)a0;
- (void)dealloc;
- (int)trackID;
- (id)_groupID;
- (id)mediaType;
- (id)group;
- (id)dictionary;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_audioCompositionPresetIndex;
- (id)_audioCompositionPresetIndexesForFallbackIDs;
- (id)_track;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (BOOL)displaysNonForcedSubtitles;
- (id)mediaSubTypes;
- (id)track;

@end

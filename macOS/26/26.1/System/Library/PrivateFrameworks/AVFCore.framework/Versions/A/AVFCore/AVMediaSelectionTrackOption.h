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

- (id)metadataForFormat:(id)a0;
- (BOOL)isPlayable;
- (int)trackID;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)group;
- (id)locale;
- (unsigned long long)hash;
- (id)dictionary;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (void)dealloc;
- (id)mediaType;
- (BOOL)isEqual:(id)a0;
- (id)_groupID;
- (id)_audioCompositionPresetIndex;
- (id)_audioCompositionPresetIndexesForFallbackIDs;
- (id)_track;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (BOOL)displaysNonForcedSubtitles;
- (id)mediaSubTypes;
- (id)track;

@end

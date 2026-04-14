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
- (int)trackID;
- (BOOL)isPlayable;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)group;
- (id)mediaType;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)_groupID;
- (id)locale;
- (unsigned long long)hash;
- (id)dictionary;
- (void)dealloc;
- (id)_audioCompositionPresetIndex;
- (id)_audioCompositionPresetIndexesForFallbackIDs;
- (id)_track;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (BOOL)displaysNonForcedSubtitles;
- (id)mediaSubTypes;
- (id)track;

@end

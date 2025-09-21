@class NSArray, AVAssetTrack, NSDictionary, AVWeakReference, NSNumber;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
    id _groupID;
    AVAssetTrack *_track;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
    char _displaysNonForcedSubtitles;
    NSNumber *_audioCompositionPresetIndex;
    NSArray *_audioCompositionPresetIndexesForFallbackIDs;
}

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionary;
- (id)locale;
- (id)group;
- (id)mediaType;
- (int)trackID;
- (id)initWithAsset:(id)a0 group:(id)a1 dictionary:(id)a2;
- (id)_audioCompositionPresetIndex;
- (id)_audioCompositionPresetIndexesForFallbackIDs;
- (id)_groupID;
- (id)_track;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (char)displaysNonForcedSubtitles;
- (char)isPlayable;
- (id)mediaSubTypes;
- (id)metadataForFormat:(id)a0;
- (id)track;

@end

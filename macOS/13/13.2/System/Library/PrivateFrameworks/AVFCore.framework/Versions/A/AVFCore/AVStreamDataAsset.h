@class AVStreamDataAssetInspector, AVStreamDataParser, AVDispatchOnce, NSArray, NSDictionary, AVAssetSynchronousInspectorLoader;

@interface AVStreamDataAsset : AVAsset {
    AVStreamDataParser *_weakReferenceToParser;
    AVStreamDataAssetInspector *_inspector;
    AVAssetSynchronousInspectorLoader *_inspectorLoader;
    AVDispatchOnce *_tracksOnce;
    NSArray *_tracks;
    NSDictionary *_trackDictsByTrackID;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)parser;
- (id)tracks;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (Class)_classForTrackInspectors;
- (id)initWithParser:(id)a0 tracks:(id)a1;
- (id)copyAssetWithAdditionalTrackID:(int)a0 mediaType:(id)a1;
- (id)copyAssetWithReplacementFormatDescription:(struct opaqueCMFormatDescription { } *)a0 forTrackID:(int)a1;
- (id)copyAssetRemovingTrackID:(int)a0;
- (id)mediaTypeForTrackID:(int)a0;
- (id)formatDescriptionsForTrackID:(int)a0;

@end

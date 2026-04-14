@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal *_assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)a0;
+ (id)makePropertyListForMovieProxyHeader:(id)a0 name:(id)a1 prefersNominalDurations:(BOOL)a2;

- (BOOL)isProxy;
- (struct OpaqueFigAsset { } *)_figAsset;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (id)initWithPropertyList:(id)a0;
- (id)tracks;
- (void)dealloc;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)_assetInspector;
- (id)_assetInspectorLoader;

@end

@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal *_assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)a0;
+ (id)makePropertyListForMovieProxyHeader:(id)a0 name:(id)a1 prefersNominalDurations:(BOOL)a2;

- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (BOOL)isProxy;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (struct OpaqueFigAsset { } *)_figAsset;
- (id)initWithPropertyList:(id)a0;
- (id)tracks;
- (void)dealloc;
- (id)_assetInspector;
- (id)_assetInspectorLoader;

@end

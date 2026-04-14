@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal *_assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)a0;
+ (id)makePropertyListForMovieProxyHeader:(id)a0 name:(id)a1 prefersNominalDurations:(BOOL)a2;

- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)initWithPropertyList:(id)a0;
- (BOOL)isProxy;
- (Class)_classForTrackInspectors;
- (void)dealloc;
- (id)tracks;
- (struct OpaqueFigAsset { } *)_figAsset;
- (id)_assetInspector;
- (id)_assetInspectorLoader;

@end

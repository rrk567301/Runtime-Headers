@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal *_assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)a0;
+ (id)makePropertyListForMovieProxyHeader:(id)a0 name:(id)a1 prefersNominalDurations:(BOOL)a2;

- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (BOOL)isProxy;
- (struct OpaqueFigAsset { } *)_figAsset;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)initWithPropertyList:(id)a0;
- (id)tracks;
- (void)dealloc;
- (id)_assetInspector;
- (id)_assetInspectorLoader;

@end

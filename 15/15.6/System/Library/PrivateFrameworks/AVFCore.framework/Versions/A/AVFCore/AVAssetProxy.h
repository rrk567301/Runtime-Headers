@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal *_assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)a0;
+ (id)makePropertyListForMovieProxyHeader:(id)a0 name:(id)a1 prefersNominalDurations:(char)a2;

- (void)dealloc;
- (char)isProxy;
- (id)initWithPropertyList:(id)a0;
- (id)tracks;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (struct OpaqueFigAsset { } *)_figAsset;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;

@end

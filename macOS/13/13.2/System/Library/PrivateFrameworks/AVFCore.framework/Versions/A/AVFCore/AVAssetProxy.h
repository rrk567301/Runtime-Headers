@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal *_assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)a0;
+ (id)makePropertyListForMovieProxyHeader:(id)a0 name:(id)a1;

- (void)dealloc;
- (BOOL)isProxy;
- (id)initWithPropertyList:(id)a0;
- (id)tracks;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (struct OpaqueFigAsset { } *)_figAsset;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (Class)_classForTrackInspectors;

@end

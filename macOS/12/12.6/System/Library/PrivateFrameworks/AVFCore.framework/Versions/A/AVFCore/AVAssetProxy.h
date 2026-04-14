@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal *_assetProxy;
}

+ (id)makePropertyListForMovieProxyHeader:(id)a0 name:(id)a1;
+ (id)assetProxyWithPropertyList:(id)a0;

- (void)dealloc;
- (BOOL)isProxy;
- (id)initWithPropertyList:(id)a0;
- (id)tracks;
- (id)_assetInspectorLoader;
- (struct OpaqueFigAsset { } *)_figAsset;
- (id)_assetInspector;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (Class)_classForTrackInspectors;

@end

@class AVDataDelegateAssetInternal;
@protocol AVAssetDataDelegate;

@interface AVDataDelegateAsset : AVAsset {
    AVDataDelegateAssetInternal *_dataDelegateAsset;
}

@property (readonly, weak, nonatomic) id<AVAssetDataDelegate> dataDelegate;

+ (BOOL)supportsPlayerItems;
+ (id)assetWithDataDelegate:(id)a0 contentType:(id)a1 contentSize:(long long)a2 options:(id)a3;

- (void)dealloc;
- (id)tracks;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (Class)_classForTrackInspectors;
- (id)initWithDataDelegate:(id)a0 contentType:(id)a1 contentSize:(long long)a2 options:(id)a3;

@end

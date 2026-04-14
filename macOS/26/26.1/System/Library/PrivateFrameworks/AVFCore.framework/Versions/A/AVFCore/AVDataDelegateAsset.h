@class AVDataDelegateAssetInternal;
@protocol AVAssetDataDelegate;

@interface AVDataDelegateAsset : AVAsset {
    AVDataDelegateAssetInternal *_dataDelegateAsset;
}

@property (readonly, weak, nonatomic) id<AVAssetDataDelegate> dataDelegate;

+ (id)assetWithDataDelegate:(id)a0 contentType:(id)a1 contentSize:(long long)a2 options:(id)a3;
+ (BOOL)supportsPlayerItems;

- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (id)tracks;
- (void)dealloc;
- (Class)_classForTrackInspectors;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (id)initWithDataDelegate:(id)a0 contentType:(id)a1 contentSize:(long long)a2 options:(id)a3;

@end

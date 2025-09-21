@protocol PEResourceLoaderDelegate;

@interface PEResourceLoadRequest : NSObject <NSCopying>

@property (nonatomic, setter=_setResolvedVersion:) long long _resolvedVersion;
@property (nonatomic) char assetLoadingAsRaw;
@property (nonatomic) char requireLocalResources;
@property (nonatomic) char requireAdjustments;
@property (nonatomic) char skipLivePhotoImageAndAVAsset;
@property (weak, nonatomic) id<PEResourceLoaderDelegate> delegate;
@property (nonatomic) long long version;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) char requireOriginalsDownloaded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_assertWorkVersionResolved;
- (char)_isWorkVersionResolved;
- (char)_needsLoadAdjustments;
- (void)_resolveVersionIfNeededWithWorkVersion:(long long)a0;

@end

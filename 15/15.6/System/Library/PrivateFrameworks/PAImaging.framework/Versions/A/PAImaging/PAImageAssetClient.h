@class NSString, PAImageAsset, PADisplay, PAMultiLevelImage, NSObject;
@protocol PAImageAssetClientDelegate, OS_dispatch_queue;

@interface PAImageAssetClient : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_imageQueue;
    PAMultiLevelImage *_image;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    double _currentScale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentROI;
    char _enableHDR;
    PADisplay *_display;
    struct { char respondsToWillLoadMasterImage; char respondsToFailedToLoadMasterImage; char respondsToDidLoadMasterImage; char respondsToDidLoadThumbnailImage; char respondsToWillUpdateImage; char respondsToDidUpdateImage; char respondsToDidUpdateImageSize; char respondsToDidUpdateMultiLevelImage; char respondsToDidPrepareRenderForUpdate; char respondsToFailedToLoadType; char respondsToDidUpdateComposition; } _delegateFlags;
}

@property (retain) PAImageAsset *asset;
@property (nonatomic) char usedStandInGeometry;
@property (retain) PADisplay *display;
@property (weak) id<PAImageAssetClientDelegate> delegate;
@property (readonly) NSString *name;
@property char wantsBackFillImage;
@property char wantsZoomImage;
@property char shouldCoalesceUpdates;
@property char enableHDR;
@property char allowsPredictiveRendering;
@property char allowTiling;
@property (readonly) char isHeld;
@property (getter=isOffscreen) char offscreen;
@property (getter=isHidden) char hidden;
@property (getter=isAnimating) char animating;
@property int priority;
@property double targetFrameRate;
@property (readonly) struct CGSize { double x0; double x1; } originalImageSize;
@property (readonly) long long imageOrientation;
@property (readonly) PAMultiLevelImage *image;
@property (readonly) char isImageUpToDate;
@property (readonly) char isImageValidInCurrentROI;
@property double currentScale;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentROI;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } frameRenderTime;

+ (id)assetClientWithName:(id)a0 assetType:(id)a1;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (char)isActive;
- (void)update:(char)a0;
- (void)_setImage:(id)a0;
- (void)ready;
- (void)hold;
- (char)_isActive;
- (void)_updateDisplay:(id)a0;
- (void)_notifyFailedToLoadMasterImage:(id)a0;
- (void)_notifyDidLoadMasterImage;
- (void)_notifyDidUpdateImage:(id)a0 type:(id)a1 region:(id)a2 updateNumber:(unsigned long long)a3 isCurrent:(char)a4;
- (void)_notifyGeometryChanged:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 updateNumber:(unsigned long long)a2;
- (void)_notifyWillLoadMasterImage;
- (struct CGSize { double x0; double x1; })_originalImageSize;
- (void)_setCurrentScale:(double)a0;
- (void)_setEnableHDR:(char)a0;
- (void)didChangeEnableHDR;
- (void)didLoadMasterImage;
- (void)didUpdateImage:(id)a0 type:(id)a1 region:(id)a2 updateNumber:(unsigned long long)a3 isCurrent:(char)a4;
- (void)failedToLoad:(id)a0;
- (void)failedToLoadMasterImage:(id)a0;
- (void)geometryChanged:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 updateNumber:(unsigned long long)a2;
- (void)setCompositionOnAsset:(id)a0;
- (void)setCompositionReplacedFilter:(id /* block */)a0;
- (void)willLoadMasterImage;

@end

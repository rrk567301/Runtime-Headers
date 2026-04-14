@class NSArray, PXPhotosViewModel;
@protocol PXPhotosLensControlItem;

@interface PXPhotosZoomableOverlayController : NSObject <PXPhotosOverlayController> {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* function */ overlayLayoutProvider;
    void /* unknown type, empty encoding */ observation;
    void /* unknown type, empty encoding */ isSwitchingLens;
    void /* unknown type, empty encoding */ currentZoomStep;
}

@property (nonatomic, copy) id /* block */ overlayLayoutProvider;
@property (nonatomic, readonly) NSArray *availableLenses;
@property (nonatomic, retain) PXPhotosViewModel *photosViewModel;
@property (nonatomic, retain) id<PXPhotosLensControlItem> currentLens;
@property (nonatomic, weak) void /* function */ delegate;

- (id)init;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;
- (BOOL)canHandleObjectReference:(id)a0;

@end

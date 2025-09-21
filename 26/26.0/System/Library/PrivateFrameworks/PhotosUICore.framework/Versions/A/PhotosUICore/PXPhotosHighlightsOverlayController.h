@class NSArray, PXPhotosViewModel;
@protocol PXPhotosLensControlItem;

@interface PXPhotosHighlightsOverlayController : NSObject <PXPhotosOverlayController> {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rootLayout;
    void /* unknown type, empty encoding */ isSwitchingLens;
}

@property (nonatomic, readonly) id /* block */ overlayLayoutProvider;
@property (nonatomic, readonly) NSArray *availableLenses;
@property (nonatomic, retain) id<PXPhotosLensControlItem> currentLens;
@property (nonatomic, retain) PXPhotosViewModel *photosViewModel;
@property (nonatomic, weak) void /* function */ delegate;

- (id)init;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;
- (BOOL)canHandleObjectReference:(id)a0;

@end

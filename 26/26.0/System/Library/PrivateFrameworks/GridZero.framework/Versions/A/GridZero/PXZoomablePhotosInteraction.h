@class NSView, PXZoomablePhotosViewModel;
@protocol PXZoomablePhotosInteractionViewModelProvider, PXZoomablePhotosInteractionDelegate;

@interface PXZoomablePhotosInteraction : NSObject {
    double _currentMagnifyEventScale;
    id _eventMonitor;
    PXZoomablePhotosViewModel *_currentViewModel;
}

@property (readonly, nonatomic) PXZoomablePhotosViewModel *viewModel;
@property (weak, nonatomic) NSView *view;
@property (weak, nonatomic) id<PXZoomablePhotosInteractionDelegate> delegate;
@property (weak, nonatomic) id<PXZoomablePhotosInteractionViewModelProvider> viewModelProvider;

- (id)init;
- (void).cxx_destruct;
- (BOOL)magnifyWithEvent:(id)a0;
- (id)initWithViewModelProvider:(id)a0;
- (id)initWithZoomablePhotosViewModel:(id)a0;
- (id)_getWorkingViewModelForPoint:(struct CGPoint { double x0; double x1; })a0 coordinateSpace:(id)a1;
- (BOOL)_magnifyWithEvent:(id)a0;
- (BOOL)_pinchInteractionShouldBeginForViewModel:(id)a0;
- (BOOL)handleTapOnAssetReference:(id)a0;

@end

@class PXZoomablePhotosViewModel, NSObject;
@protocol PXZoomablePhotosInteractionDelegate, PXAnonymousView;

@interface PXZoomablePhotosInteraction : NSObject {
    double _currentMagnifyEventScale;
    id _eventMonitor;
}

@property (readonly, nonatomic) PXZoomablePhotosViewModel *viewModel;
@property (weak, nonatomic) NSObject<PXAnonymousView> *view;
@property (weak, nonatomic) id<PXZoomablePhotosInteractionDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (char)magnifyWithEvent:(id)a0;
- (char)_magnifyWithEvent:(id)a0;
- (char)_pinchInteractionShouldBegin;
- (char)handleTapOnAssetReference:(id)a0;
- (id)initWithZoomablePhotosViewModel:(id)a0;

@end

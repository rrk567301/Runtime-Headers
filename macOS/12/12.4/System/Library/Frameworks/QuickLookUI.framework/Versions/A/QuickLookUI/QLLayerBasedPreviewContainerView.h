@protocol QLLayerBasedPreviewEventHandlingDelegate;

@interface QLLayerBasedPreviewContainerView : NSView

@property id<QLLayerBasedPreviewEventHandlingDelegate> delegate;

- (void)scrollWheel:(id)a0;

@end

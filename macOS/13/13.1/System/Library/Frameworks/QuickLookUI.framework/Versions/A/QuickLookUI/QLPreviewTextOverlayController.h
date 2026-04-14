@class NSTextField, NSView, QLOverlayView, CALayer;
@protocol QLPreviewTextOverlayHostDelegate;

@interface QLPreviewTextOverlayController : NSObject {
    CALayer *_pathOverlayLayer;
}

@property (retain) QLOverlayView *overlayView;
@property (retain) NSTextField *textOverlayField;
@property (weak) NSView<QLPreviewTextOverlayHostDelegate> *hostView;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)hasRoundedCorners;
- (void)removeOverlay;
- (void)createOverlay;
- (void)updateOverlayFrame;
- (void)setShowOverlay:(BOOL)a0;

@end

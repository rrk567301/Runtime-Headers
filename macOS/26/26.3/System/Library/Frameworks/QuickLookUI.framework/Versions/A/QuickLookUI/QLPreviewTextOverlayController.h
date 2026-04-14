@class NSTextField, NSView, QLOverlayView, CALayer;
@protocol QLPreviewTextOverlayHostDelegate;

@interface QLPreviewTextOverlayController : NSObject {
    CALayer *_pathOverlayLayer;
}

@property (retain) QLOverlayView *overlayView;
@property (retain) NSTextField *textOverlayField;
@property (weak) NSView<QLPreviewTextOverlayHostDelegate> *hostView;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)hasRoundedCorners;
- (void)removeOverlay;
- (void)setShowOverlay:(BOOL)a0;
- (void)createOverlay;
- (void)updateOverlayFrame;

@end

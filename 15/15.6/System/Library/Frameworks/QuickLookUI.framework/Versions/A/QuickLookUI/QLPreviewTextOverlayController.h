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
- (char)hasRoundedCorners;
- (void)removeOverlay;
- (void)setShowOverlay:(char)a0;
- (void)createOverlay;
- (void)updateOverlayFrame;

@end

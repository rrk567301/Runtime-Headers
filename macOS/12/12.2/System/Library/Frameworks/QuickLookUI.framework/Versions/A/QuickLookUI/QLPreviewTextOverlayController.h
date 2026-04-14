@class NSTextField, NSView, QLOverlayView, CALayer;
@protocol QLPreviewTextOverlayHostDelegate;

@interface QLPreviewTextOverlayController : NSObject {
    CALayer *_pathOverlayLayer;
}

@property (retain) QLOverlayView *overlayView;
@property (retain) NSTextField *textOverlayField;
@property NSView<QLPreviewTextOverlayHostDelegate> *hostView;

- (void)dealloc;
- (BOOL)hasRoundedCorners;
- (void)removeOverlay;
- (void)updateOverlayFrame;
- (void)createOverlay;
- (void)setShowOverlay:(BOOL)a0;

@end

@class NSPopover, NSImageView, NSGridView;

@interface NSDebugTouchBarInspectorViewController : NSViewController {
    NSImageView *_imageView;
    NSGridView *_gridView;
    NSPopover *_inspectorPopover;
}

- (void)loadView;
- (void)dealloc;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setRepresentedObject:(id)a0;

@end

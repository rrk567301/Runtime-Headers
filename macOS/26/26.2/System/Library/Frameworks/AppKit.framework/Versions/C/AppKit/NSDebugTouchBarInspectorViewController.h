@class NSPopover, NSImageView, NSGridView;

@interface NSDebugTouchBarInspectorViewController : NSViewController {
    NSImageView *_imageView;
    NSGridView *_gridView;
    NSPopover *_inspectorPopover;
}

- (void)mouseEntered:(id)a0;
- (void)loadView;
- (void)mouseExited:(id)a0;
- (void)dealloc;
- (void)setRepresentedObject:(id)a0;

@end

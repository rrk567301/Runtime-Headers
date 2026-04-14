@class NSPopover, NSImageView, NSGridView;

@interface NSDebugTouchBarInspectorViewController : NSViewController {
    NSImageView *_imageView;
    NSGridView *_gridView;
    NSPopover *_inspectorPopover;
}

- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)dealloc;
- (void)loadView;
- (void)setRepresentedObject:(id)a0;

@end

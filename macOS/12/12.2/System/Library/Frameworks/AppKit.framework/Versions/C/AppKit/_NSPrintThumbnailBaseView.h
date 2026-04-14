@class NSView;

@interface _NSPrintThumbnailBaseView : NSView {
    NSView *_initialKeyView;
    NSView *_lastKeyView;
}

- (id)_initialKeyView;
- (void)_setNextKeyView:(id)a0;

@end

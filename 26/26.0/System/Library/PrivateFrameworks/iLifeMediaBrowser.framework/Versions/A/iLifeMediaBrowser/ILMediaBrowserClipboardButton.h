@class NSTimer;

@interface ILMediaBrowserClipboardButton : NSButton {
    NSTimer *_dragTimer;
    id _delegate;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (void)draggingExited:(id)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;

@end

@class NSArray;

@interface DEDragReceiverView : NSView {
    id _dragDelegate;
    BOOL _dropOperationInProgress;
}

@property (retain) NSArray *registeredDragTypes;

- (void)dealloc;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (unsigned long long)draggingEntered:(id)a0;
- (void)draggingExited:(id)a0;
- (void)draggingEnded:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)setDragDelegate:(id)a0;
- (void)registerForDragTypes;

@end

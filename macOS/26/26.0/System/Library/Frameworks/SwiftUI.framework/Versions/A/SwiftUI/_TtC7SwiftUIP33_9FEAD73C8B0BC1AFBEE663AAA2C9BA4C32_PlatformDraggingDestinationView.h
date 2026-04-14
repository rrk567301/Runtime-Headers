@interface _TtC7SwiftUIP33_9FEAD73C8B0BC1AFBEE663AAA2C9BA4C32_PlatformDraggingDestinationView : NSView {
    void /* unknown type, empty encoding */ dropContentTypes;
    void /* unknown type, empty encoding */ configurationResolver;
    void /* unknown type, empty encoding */ lastDropSession;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)draggingExited:(id)a0;
- (BOOL)_shouldArrangeSublayers;
- (void)concludeDragOperation:(id)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;

@end

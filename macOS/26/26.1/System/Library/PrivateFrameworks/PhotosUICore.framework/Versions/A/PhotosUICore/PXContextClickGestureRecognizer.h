@class NSEvent;

@interface PXContextClickGestureRecognizer : NSGestureRecognizer {
    NSEvent *_recognizedEvent;
    unsigned long long _cleanupEventType;
}

- (void)reset;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)popUpContextMenu:(id)a0 forView:(id)a1;

@end

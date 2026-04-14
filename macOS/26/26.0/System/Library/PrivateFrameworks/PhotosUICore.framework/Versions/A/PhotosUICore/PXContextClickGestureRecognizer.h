@class NSEvent;

@interface PXContextClickGestureRecognizer : NSGestureRecognizer {
    NSEvent *_recognizedEvent;
    unsigned long long _cleanupEventType;
}

- (void)mouseDown:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)a0;
- (void)popUpContextMenu:(id)a0 forView:(id)a1;

@end

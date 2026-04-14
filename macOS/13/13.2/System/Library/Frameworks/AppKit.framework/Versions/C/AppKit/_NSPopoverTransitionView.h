@class CALayer;

@interface _NSPopoverTransitionView : NSView {
    CALayer *_oldContentLayer;
    CALayer *_newContentLayer;
    struct CGSize { double width; double height; } _newContentSize;
    double _delta;
}

- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithOldContent:(id)a0 newContent:(id)a1;

@end

@class NSView, NSUUID;

@interface NSWritingToolsUnderlineView : NSView {
    NSView *_gradientSuperview;
}

@property (weak) NSView *gradientSuperview;
@property (copy) NSUUID *suggestionUUID;
@property double fadeBeginTime;

- (void).cxx_destruct;
- (void)_getWritingToolsGradientColors:(id *)a0 stops:(id *)a1;
- (void)animateToVisible:(BOOL)a0 withBeginTime:(double)a1 completionBlock:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end

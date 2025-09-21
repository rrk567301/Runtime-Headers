@interface QTHUDBackgroundView : NSView {
    struct QTHUDBackgroundViewInternal { unsigned long long x0; double x1; } *_QTHUDBackgroundViewInternal;
}

+ (void)initialize;
+ (id)defaultAnimationForKey:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setControlSize:(unsigned long long)a0;
- (unsigned long long)backgroundStyle;
- (unsigned long long)controlSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)mouseDownCanMoveWindow;
- (void)setBackgroundStyle:(unsigned long long)a0;
- (id)_QTUIDrawingOptions;
- (unsigned long long)QTHUD_backgroundTintForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)contentBorderPosition;
- (void)setContentBorderPosition:(double)a0;

@end

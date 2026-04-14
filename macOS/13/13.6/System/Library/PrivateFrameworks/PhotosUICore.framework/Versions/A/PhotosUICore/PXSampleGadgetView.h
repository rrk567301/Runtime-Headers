@class NSView, NSColor;
@protocol PXSampleGadgetViewDelegate;

@interface PXSampleGadgetView : UXView

@property (retain, nonatomic) NSView *colorView;
@property (weak, nonatomic) id<PXSampleGadgetViewDelegate> delegate;
@property (retain, nonatomic) NSColor *color;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end

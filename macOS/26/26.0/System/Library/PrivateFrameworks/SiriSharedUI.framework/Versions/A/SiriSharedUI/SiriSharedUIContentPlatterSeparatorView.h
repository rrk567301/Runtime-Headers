@class NSView;

@interface SiriSharedUIContentPlatterSeparatorView : NSView

@property (retain, nonatomic) NSView *backgroundView;
@property (retain, nonatomic) NSView *backgroundViewSmall;
@property (nonatomic) long long separatorType;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_scale;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupBackgroundView;
- (void).cxx_destruct;
- (BOOL)wantsLayer;
- (void)_setupBackgroundViewSmall;

@end

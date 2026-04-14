@class NSView;

@interface SiriSharedUIContentPlatterSeparatorView : NSView

@property (retain, nonatomic) NSView *backgroundView;
@property (retain, nonatomic) NSView *backgroundViewSmall;
@property (nonatomic) long long separatorType;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layout;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupBackgroundView;
- (double)_scale;
- (BOOL)wantsLayer;
- (void)_setupBackgroundViewSmall;

@end

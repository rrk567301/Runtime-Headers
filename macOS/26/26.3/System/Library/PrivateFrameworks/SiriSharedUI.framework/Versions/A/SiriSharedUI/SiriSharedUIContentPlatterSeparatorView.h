@class NSView;

@interface SiriSharedUIContentPlatterSeparatorView : NSView

@property (retain, nonatomic) NSView *backgroundView;
@property (retain, nonatomic) NSView *backgroundViewSmall;
@property (nonatomic) long long separatorType;

- (double)_scale;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)_setupBackgroundView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)wantsLayer;
- (void)_setupBackgroundViewSmall;

@end

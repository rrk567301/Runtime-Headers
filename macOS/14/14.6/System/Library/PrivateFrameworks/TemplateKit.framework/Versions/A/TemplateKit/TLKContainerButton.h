@class TLKSButton, NSView;
@protocol TLKContainerButtonDelegate;

@interface TLKContainerButton : TLKView

@property (readonly) TLKSButton *intrinsicButton;
@property (readonly) NSView *containedView;
@property (readonly) NSView *contentView;
@property (weak, nonatomic) id<TLKContainerButtonDelegate> actionDelegate;

+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })defaultLayoutMargins;

- (void).cxx_destruct;
- (id)menu;
- (void)layout;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)didSelectButton;
- (id)initWithContent:(id)a0 delegate:(id)a1;
- (id)setupContentView;

@end

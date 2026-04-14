@class NSView;

@interface FI_TScopeBarStackView : NSStackView

@property (retain, nonatomic) NSView *viewToSwapIn;
@property (retain, nonatomic) NSView *viewToSwapOut;

- (void)layout;
- (void).cxx_destruct;

@end

@class WFVariablePillHostingView;

@interface WFVariablePillView : NSView

@property (readonly, nonatomic) WFVariablePillHostingView *hostingView;

+ (double)widthForVariableViewWithName:(id)a0 icon:(id)a1 font:(id)a2 height:(double)a3;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 icon:(id)a1 font:(id)a2 available:(BOOL)a3 height:(double)a4 controlState:(unsigned long long)a5;

@end

@class CALayer, NSView;

@interface IMKUIDelimiter : NSObject

@property (retain, nonatomic) CALayer *internalLayer;
@property (nonatomic) BOOL usesLayer;
@property (weak, nonatomic) NSView *view;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithView:(id)a0 usesLayer:(BOOL)a1;
- (void)updateFrameAndRefresh:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

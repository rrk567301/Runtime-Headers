@class CALayer, NSString;
@protocol IMTypingIndicatorLayerProtocol;

@interface SOTypingIndicatorView : NSView

@property (retain, nonatomic) CALayer<IMTypingIndicatorLayerProtocol> *typingLayer;
@property (nonatomic) char isDarkAqua;
@property (nonatomic) char flipForRTLLayout;
@property (nonatomic) char hasDarkBackground;
@property (copy, nonatomic) NSString *balloonPlugInBundleID;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeBackingProperties:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopAnimation;
- (void)updateLayer;
- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(id /* block */)a0;
- (void)_updateTypingLayerTransform;
- (void)destroyTypingLayer;
- (void)resetTypingLayer;
- (void)_commonSOTypingIndicatorViewInit;
- (void)_updatePlugInImage;

@end

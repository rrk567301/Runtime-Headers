@class CALayer, NSString;
@protocol IMTypingIndicatorLayerProtocol;

@interface SOTypingIndicatorView : NSView

@property (retain, nonatomic) CALayer<IMTypingIndicatorLayerProtocol> *typingLayer;
@property (nonatomic) BOOL isDarkAqua;
@property (nonatomic) BOOL flipForRTLLayout;
@property (nonatomic) BOOL hasDarkBackground;
@property (copy, nonatomic) NSString *balloonPlugInBundleID;

- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopAnimation;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewDidChangeBackingProperties:(id)a0;
- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(id /* block */)a0;
- (void)_updateTypingLayerTransform;
- (void)destroyTypingLayer;
- (void)resetTypingLayer;
- (void)_commonSOTypingIndicatorViewInit;
- (void)_updatePlugInImage;

@end

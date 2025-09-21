@interface AVControlsPresentationContext : NSObject

@property (nonatomic, getter=isAnimating) char animating;
@property (nonatomic) char controlsAreVisible;

- (id)_initAVInternal;

@end

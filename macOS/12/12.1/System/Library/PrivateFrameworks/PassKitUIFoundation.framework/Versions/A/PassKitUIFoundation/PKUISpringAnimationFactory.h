@interface PKUISpringAnimationFactory : PKSpringAnimationFactory

@property (copy, nonatomic) id /* block */ animationDelayHandler;
@property (readonly, nonatomic) double maximumVendedDelay;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (id)_springAnimationForView:(id)a0 withKeyPath:(id)a1;
- (id)springAnimationForView:(id)a0 withKeyPath:(id)a1;
- (id)highFrameRateSpringAnimationForView:(id)a0 withKeyPath:(id)a1 reason:(unsigned short)a2;

@end

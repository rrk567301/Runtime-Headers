@interface PKUISpringAnimationFactory : PKSpringAnimationFactory

@property (copy, nonatomic) id /* block */ animationDelayHandler;
@property (readonly, nonatomic) double maximumVendedDelay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_springAnimationForView:(id)a0 withKeyPath:(id)a1;
- (id)highFrameRateSpringAnimationForView:(id)a0 withKeyPath:(id)a1 reason:(unsigned short)a2;
- (id)springAnimationForView:(id)a0 withKeyPath:(id)a1;

@end

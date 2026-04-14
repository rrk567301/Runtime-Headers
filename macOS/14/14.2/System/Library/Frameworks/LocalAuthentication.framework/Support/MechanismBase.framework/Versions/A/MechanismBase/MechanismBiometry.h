@interface MechanismBiometry : MechanismACM

@property (nonatomic) BOOL biolockout;
@property (readonly, nonatomic) BOOL isFallbackVisible;

- (BOOL)canRecoverFromError:(id)a0 request:(id)a1;
- (BOOL)willTryToRecover;

@end

@interface QCInteractionPort : QCVirtualPort

+ (Class)baseClass;

- (Class)valueClass;
- (id)stateValue;
- (char)setStateValue:(id)a0;
- (void)_setConnectedPort:(id)a0;
- (char)acceptValuesOfClass:(Class)a0;
- (char)canConnectToPort:(id)a0;

@end

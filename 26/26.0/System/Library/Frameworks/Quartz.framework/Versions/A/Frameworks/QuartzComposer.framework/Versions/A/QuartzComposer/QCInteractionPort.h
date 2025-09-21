@interface QCInteractionPort : QCVirtualPort

+ (Class)baseClass;

- (id)stateValue;
- (Class)valueClass;
- (BOOL)setStateValue:(id)a0;
- (void)_setConnectedPort:(id)a0;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (BOOL)canConnectToPort:(id)a0;

@end

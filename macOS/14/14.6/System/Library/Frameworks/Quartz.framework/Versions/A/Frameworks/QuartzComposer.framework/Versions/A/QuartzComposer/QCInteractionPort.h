@interface QCInteractionPort : QCVirtualPort

+ (Class)baseClass;

- (Class)valueClass;
- (BOOL)setStateValue:(id)a0;
- (id)stateValue;
- (void)_setConnectedPort:(id)a0;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (BOOL)canConnectToPort:(id)a0;

@end

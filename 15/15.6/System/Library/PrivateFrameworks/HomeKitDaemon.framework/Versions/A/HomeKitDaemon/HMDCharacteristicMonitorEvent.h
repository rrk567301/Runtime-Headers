@interface HMDCharacteristicMonitorEvent : HMDCharacteristicEvent

+ (id)logCategory;

- (id)description;
- (char)_compareEventValue:(id)a0;
- (char)_evaluateNewValue:(id)a0;
- (char)isCompatibleWithEvent:(id)a0;

@end

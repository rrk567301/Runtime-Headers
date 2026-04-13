@interface RWIMachine : RWITarget

@property (readonly, nonatomic, getter=isCurrentMachine) BOOL currentMachine;

- (BOOL)isReady;
- (BOOL)supportsAutomaticInspection;
- (BOOL)isMachine;
- (long long)automationAvailability;
- (BOOL)supportsWebDriver;
- (id)initWithName:(id)a0 udid:(id)a1 currentMachine:(BOOL)a2 manager:(id)a3;
- (void)setMachineName:(id)a0 buildVersion:(id)a1 productVersion:(id)a2;

@end

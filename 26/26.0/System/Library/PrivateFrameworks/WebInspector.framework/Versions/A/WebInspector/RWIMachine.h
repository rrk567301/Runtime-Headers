@interface RWIMachine : RWITarget

@property (readonly, nonatomic, getter=isCurrentMachine) BOOL currentMachine;

- (long long)deviceClass;
- (BOOL)isReady;
- (id)icon;
- (id)symbolImage;
- (BOOL)isMachine;
- (long long)automationAvailability;
- (id)initWithName:(id)a0 udid:(id)a1 currentMachine:(BOOL)a2 manager:(id)a3;
- (void)setMachineName:(id)a0 buildVersion:(id)a1 productVersion:(id)a2;
- (BOOL)supportsWebDriver;

@end

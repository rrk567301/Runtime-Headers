@interface RWIMachine : RWITarget

@property (readonly, nonatomic, getter=isCurrentMachine) char currentMachine;

- (char)isReady;
- (id)icon;
- (long long)deviceClass;
- (id)symbolImage;
- (char)isMachine;
- (long long)automationAvailability;
- (id)initWithName:(id)a0 udid:(id)a1 currentMachine:(char)a2 manager:(id)a3;
- (void)setMachineName:(id)a0 buildVersion:(id)a1 productVersion:(id)a2;
- (char)supportsWebDriver;

@end

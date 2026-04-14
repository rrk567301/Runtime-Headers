@class NSString;

@interface HomeKitDaemon.CleanEnergyAutomationReducedEnergyLogEvent : HMMHomeLogEvent

@property (nonatomic, readonly) NSString *description;

- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end

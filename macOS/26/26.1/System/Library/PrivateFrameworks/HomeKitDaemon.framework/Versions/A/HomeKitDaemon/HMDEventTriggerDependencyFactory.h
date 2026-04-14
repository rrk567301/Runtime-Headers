@class HMDLaunchHandler;

@interface HMDEventTriggerDependencyFactory : NSObject <HMDEventTriggerDependencyFactory>

@property (readonly, nonatomic) HMDLaunchHandler *launchHandler;

- (id)createTimerWithTimeInterval:(double)a0 options:(unsigned int)a1;

@end

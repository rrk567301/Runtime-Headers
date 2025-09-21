@class HMMIntervalMapper, HMFPowerLogger;
@protocol HMMLogEventDispatching;

@interface HMDPowerLogObserverContext : NSObject

@property (readonly, nonatomic) HMMIntervalMapper *homeConfigurationEventHistogram;
@property (readonly, nonatomic) HMMIntervalMapper *cameraConfigurationEventHistogram;
@property (readonly, weak, nonatomic) id<HMMLogEventDispatching> logEventDispatcher;
@property (readonly, weak, nonatomic) HMFPowerLogger *powerLogger;

- (id)initWithLogEventDispatcher:(id)a0 powerLogger:(id)a1;
- (void).cxx_destruct;

@end

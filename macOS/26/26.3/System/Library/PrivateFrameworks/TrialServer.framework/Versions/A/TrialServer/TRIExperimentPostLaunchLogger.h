@class TRIClient;

@interface TRIExperimentPostLaunchLogger : NSObject <TRIExperimentPostLaunchLogging>

@property (readonly, nonatomic) TRIClient *client;

- (id)initWithClient:(id)a0;
- (void).cxx_destruct;
- (id)_metricForEvent:(id)a0;
- (void)logExperimentPostLaunchEvent:(id)a0;

@end

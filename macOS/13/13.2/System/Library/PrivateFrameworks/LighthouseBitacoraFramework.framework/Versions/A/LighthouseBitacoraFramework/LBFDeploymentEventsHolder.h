@class NSString, NSMutableArray;

@interface LBFDeploymentEventsHolder : NSObject

@property (readonly, nonatomic) NSString *experimentOrTaskId;
@property (readonly, nonatomic) NSString *deploymentId;
@property (readonly, nonatomic) NSMutableArray *lighthousePluginEvents;
@property (readonly, nonatomic) NSMutableArray *mlruntimedEvents;
@property (readonly, nonatomic) NSMutableArray *trialdEvents;

- (void).cxx_destruct;
- (id)initWithExperimentOrTaskId:(id)a0 deploymentId:(id)a1;
- (BOOL)appendMlruntimedEvent:(id)a0;
- (BOOL)appendLighthousePluginEvent:(id)a0;
- (BOOL)appendTrialEvent:(id)a0;
- (id)eventToJSONString:(id)a0;
- (id)getSortedEvents;
- (BOOL)dumpFetchedEvents;

@end

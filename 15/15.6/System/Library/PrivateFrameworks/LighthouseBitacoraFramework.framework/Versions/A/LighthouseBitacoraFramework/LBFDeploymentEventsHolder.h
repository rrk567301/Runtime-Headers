@class NSString, NSMutableArray;

@interface LBFDeploymentEventsHolder : NSObject

@property (readonly, nonatomic) NSString *experimentOrTaskId;
@property (readonly, nonatomic) NSString *deploymentId;
@property (readonly, nonatomic) NSMutableArray *lighthousePluginEvents;
@property (readonly, nonatomic) NSMutableArray *mlruntimedEvents;
@property (readonly, nonatomic) NSMutableArray *trialdEvents;
@property (readonly, nonatomic) NSMutableArray *dprivacydEvents;

- (void).cxx_destruct;
- (id)getSortedEvents;
- (char)appendDprivacydEvent:(id)a0;
- (char)appendLighthousePluginEvent:(id)a0;
- (char)appendMlruntimedEvent:(id)a0;
- (char)appendTrialEvent:(id)a0;
- (char)dumpFetchedEvents;
- (id)eventToJSONDictionary:(id)a0;
- (id)eventToJSONString:(id)a0;
- (id)fetchedEventsInDictionaries;
- (id)initWithExperimentOrTaskId:(id)a0 deploymentId:(id)a1;

@end

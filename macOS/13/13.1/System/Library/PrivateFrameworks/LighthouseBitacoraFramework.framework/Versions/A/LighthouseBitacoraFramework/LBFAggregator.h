@class NSMutableDictionary, NSDate;

@interface LBFAggregator : NSObject

@property (retain, nonatomic) NSMutableDictionary *experimentEventsHolders;
@property (retain, nonatomic) NSDate *lastBiomeReadEndDate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)fetchEvents;
- (BOOL)upload;
- (BOOL)dumpFetchedEvents;
- (id)ensureExperimentEventsHolder:(id)a0;
- (id)ensureDeploymentEventsHolder:(id)a0;
- (id)aggregateEventsFromBiome:(BOOL)a0;
- (BOOL)upload:(BOOL)a0;
- (BOOL)uploadEvents;
- (void)dumpAggregate;

@end

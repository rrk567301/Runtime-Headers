@class BMMiningTaskConfig;

@interface BMEventExtractor : NSObject

@property BOOL shouldStop;
@property (retain) BMMiningTaskConfig *bmMiningTaskConfig;

- (void).cxx_destruct;
- (id)init;
- (id)extractEventsFilteredByTypes:(id)a0 taskSpecificEventProviders:(id)a1 error:(id *)a2;
- (id)initWithBMMiningTaskConfig:(id)a0;
- (void)terminateEarly;

@end

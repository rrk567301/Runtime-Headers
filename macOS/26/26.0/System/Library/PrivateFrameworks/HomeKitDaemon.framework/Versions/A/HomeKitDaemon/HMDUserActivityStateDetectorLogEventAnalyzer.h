@class NSString, HMDEventCounterGroup, NSMutableArray;
@protocol HMDLogEventAnalyzerDataSource;

@interface HMDUserActivityStateDetectorLogEventAnalyzer : HMDLogEventAnalyzer <HMMDailyTaskRunner>

@property (readonly, nonatomic) id<HMDLogEventAnalyzerDataSource> dataSource;
@property (readonly) HMDEventCounterGroup *type6DetectorTransitionCounterGroup;
@property (retain, nonatomic) NSMutableArray *durationsBetweenInitialETAAndActualArrivalTime;
@property (retain, nonatomic) NSMutableArray *durationsBetweenStartingComingHomeAndActualArrivalTime;
@property (retain, nonatomic) NSMutableArray *durationsBetweenStartingComingHomeAndCancellingComingHome;
@property (retain, nonatomic) NSMutableArray *durationsBetweenCancellingComingHomeAndEstimatedArrivalTime;
@property (retain, nonatomic) NSMutableArray *durationsBetweenStartingComingHomeAndPausingComingHome;
@property (retain, nonatomic) NSMutableArray *durationsBetweenPausingComingHomeAndEstimatedArrivalTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure;
- (void)runDailyTask;
- (id)initWithDataSource:(id)a0;
- (void)observeEvent:(id)a0;
- (void).cxx_destruct;
- (void)handleType6TransitionLogEvent:(id)a0;
- (void)resetCounterGroups;
- (void)resetType6DetectorTransitionCounterGroup;
- (void)submitCounterGroups;
- (void)submitType6DetectorTransitionCounterGroups;

@end

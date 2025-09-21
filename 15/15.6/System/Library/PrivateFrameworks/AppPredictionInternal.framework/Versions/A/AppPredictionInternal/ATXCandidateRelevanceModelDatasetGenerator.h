@class BPSPublisher, NSString, ATXCandidateRelevanceModelDatasetGeneratorConfig;

@interface ATXCandidateRelevanceModelDatasetGenerator : NSObject <ATXCandidateRelevanceModelDatasetGeneratorProtocol>

@property (retain, nonatomic) BPSPublisher *contextPublisher;
@property (retain, nonatomic) BPSPublisher *modePublisher;
@property (retain, nonatomic) BPSPublisher *userFocusComputedModePublisher;
@property (retain, nonatomic) BPSPublisher *poiCategoryPublisher;
@property (retain, nonatomic) BPSPublisher *bluetoothPublisher;
@property (retain, nonatomic) BPSPublisher *microlocationVisitPublisher;
@property (retain, nonatomic) ATXCandidateRelevanceModelDatasetGeneratorConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventAndRecentContextPublisher:(id)a0;
+ (id)candidateDataPointsForSession:(id)a0 candidate:(id)a1;
+ (id)candidateDataPointsForSessions:(id)a0 candidate:(id)a1;
+ (id)dataPointPublisher:(id)a0;
+ (char)isContextMismatchForPreviousContext:(id)a0 currentContext:(id)a1;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)candidateDatasetStream;
- (id)initWithConfig:(id)a0 contextPublisher:(id)a1 modePublisher:(id)a2 poiCategoryPublisher:(id)a3 bluetoothPublisher:(id)a4 userFocusComputedModePublisher:(id)a5 microlocationVisitPublisher:(id)a6;
- (id)initWithConfig:(id)a0 inferredModeStream:(id)a1 computedModeStream:(id)a2 pointOfInterestStream:(id)a3;
- (void)receiveCandidateDataPoint:(id /* block */)a0 completion:(id /* block */)a1 candidate:(id)a2;
- (void)receiveDataPoint:(id /* block */)a0 completion:(id /* block */)a1;
- (void)receiveDatasetSession:(id /* block */)a0 completion:(id /* block */)a1;

@end

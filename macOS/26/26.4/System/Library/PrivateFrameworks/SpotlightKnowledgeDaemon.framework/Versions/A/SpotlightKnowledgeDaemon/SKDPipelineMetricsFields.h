@class NSNumber, NSDictionary, NSDate;

@interface SKDPipelineMetricsFields : NSObject

@property (retain) NSNumber *donationsSinceLastFetch;
@property (retain) NSNumber *itemsProcessedSinceLastReport;
@property (retain) NSNumber *itemsWithProcessingResultsSinceLastReport;
@property (retain) NSNumber *itemsFailedProcessingSinceLastReport;
@property (retain) NSNumber *redonationsRequestedSinceLastReport;
@property (retain) NSNumber *processedRedonationsRequestedSinceLastReport;
@property (retain) NSNumber *journalsPurgedSinceLastReport;
@property (retain) NSNumber *instantProcessedItemsSinceLastReport;
@property (retain) NSNumber *instantUnprocessedItemsSinceLastReport;
@property (retain) NSNumber *priorityProcessedItemsSinceLastReport;
@property (retain) NSNumber *priorityUnprocessedItemsSinceLastReport;
@property (retain) NSNumber *timeSpentProcessingSinceLastReport;
@property (retain) NSNumber *timeSinceLastReport;
@property (retain) NSDictionary *latestProcessedSerialNumberByIndex;
@property (retain) NSDate *enablementDate;

- (void).cxx_destruct;
- (id)initWithDonationsSinceLastFetch:(id)a0 itemsProcessedSinceLastReport:(id)a1 itemsWithProcessingResultsSinceLastReport:(id)a2 itemsFailedProcessingSinceLastReport:(id)a3 redonationsRequestedSinceLastReport:(id)a4 processedRedonationsRequestedSinceLastReport:(id)a5 journalsPurgedSinceLastReport:(id)a6 instantProcessedItemsSinceLastReport:(id)a7 instantUnprocessedItemsSinceLastReport:(id)a8 priorityProcessedItemsSinceLastReport:(id)a9 priorityUnprocessedItemsSinceLastReport:(id)a10 timeSpentProcessingSinceLastReport:(id)a11 latestProcessedSerialNumberByIndex:(id)a12 enablementDate:(id)a13;

@end

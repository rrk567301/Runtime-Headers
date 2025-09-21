@class HMDCameraRecordingEventObserver;

@interface HMDCameraRecordingEventDailySummaryHouseholdLogEventFactory : NSObject <HMDHouseholdDistributedMetricsLogEventFactory, HMDHouseholdMetricsLogEventFactory>

@property (nonatomic, retain) HMDCameraRecordingEventObserver *cameraRecordingEventObserver;

- (id)init;
- (void).cxx_destruct;
- (id)coalescedLogEventsFromLogEvents:(id)a0 homeUUID:(id)a1;
- (void)deleteCountersAfterDate:(id)a0;
- (void)deleteCountersBeforeDate:(id)a0;
- (id)initWithCameraRecordingEventObserver:(id)a0;
- (id)logEventsFromDictionary:(id)a0;
- (id)logEventsPopulatedForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;
- (id)serializeLogEvents:(id)a0;

@end

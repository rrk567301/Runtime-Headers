@class HMMDateProvider, HMMDailyScheduler, HMDEventCountersManager;
@protocol HMDCurrentResidentDeviceDataSource, HMMLogEventDispatching;

@interface HMDCameraRecordingEventObserver : NSObject <HMMLogEventObserver, HMMDailyTaskRunner> {
    void /* unknown type, empty encoding */ startMutex;
}

@property (nonatomic, retain) id<HMMLogEventDispatching> logEventDispatcher;
@property (nonatomic, retain) HMDEventCountersManager *countersManager;
@property (nonatomic, retain) HMMDailyScheduler *dailyScheduler;
@property (nonatomic, retain) HMMDateProvider *dateProvider;
@property (nonatomic, retain) id<HMDCurrentResidentDeviceDataSource> currentHomeDataSource;

- (void)runDailyTask;
- (void)start;
- (void)stop;
- (id)init;
- (void)observeEvent:(id)a0;
- (void).cxx_destruct;
- (id)logEventForCurrentHomeWithDate:(id)a0;
- (void)handleRecordingSessionLogEvent:(id)a0;
- (void)deleteCountersBefore:(BOOL)a0 date:(id)a1;
- (void)handleRecordingUploadOperationEvent:(id)a0;
- (id)initWithLogEventDispatcher:(id)a0 countersManager:(id)a1 dailyScheduler:(id)a2 dateProvider:(id)a3 currentHomeDataSource:(id)a4;

@end

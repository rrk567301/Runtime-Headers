@class NSString, NSDictionary, NSUUID;

@interface HMDProcessLaunchInfoLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly) long long submissionState;
@property (readonly, copy, nonatomic) NSString *dataSyncState;
@property (readonly) long long systemUptimeMillisecondsAtLaunch;
@property (readonly) double timeIntervalSincePreviousProcessLaunch;
@property (readonly) long long homeDataLoadedMilliseconds;
@property (readonly) long long xpcMessageTransportReadyMilliseconds;
@property (readonly) long long millisecondsSinceLaunchToDataSyncStateGood;
@property (readonly) long long millisecondsToAccountResolved;
@property (readonly) long long numUncommittedRecords;
@property (readonly) long long numUncommittedAndPushedRecords;
@property (readonly, nonatomic) NSString *processExitType;
@property (readonly, nonatomic) NSString *processExitReason;
@property (readonly) BOOL isConfigurationLoaded;
@property (readonly) BOOL isTTSUInProgress;
@property (readonly) BOOL eventSubmittedOnTimeOut;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSubmissionState:(long long)a0 dataSyncState:(id)a1 timeIntervalSincePreviousProcessLaunch:(double)a2 millisecondsToHomeDataLoad:(long long)a3 millisecondsToXPCMessageTransportReady:(long long)a4 millisecondsSinceLaunchToDataSyncStateGood:(long long)a5 millisecondsToAccountResolved:(long long)a6 numUncommittedRecords:(long long)a7 numUncommittedAndPushedRecords:(long long)a8 processExitType:(id)a9 processExitReason:(id)a10 isConfigurationLoaded:(BOOL)a11 isTTSUInProgress:(BOOL)a12;
- (void).cxx_destruct;

@end

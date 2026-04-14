@class NSString, NSDictionary;

@interface HMDProcessLaunchInfoLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) long long submissionState;
@property (readonly, copy, nonatomic) NSString *dataSyncState;
@property (readonly) unsigned long long systemUptimeMillisecondsAtLaunch;
@property (readonly) double timeIntervalSincePreviousProcessLaunch;
@property (readonly) unsigned long long homeDataLoadedMilliseconds;
@property (readonly) unsigned long long xpcMessageTransportReadyMilliseconds;
@property (readonly) unsigned long long millisecondsSinceLaunchToDataSyncStateGood;
@property (readonly) unsigned long long millisecondsToAccountResolved;
@property (readonly) long long numUncommittedRecords;
@property (readonly) long long numUncommittedAndPushedRecords;
@property (readonly, nonatomic) NSString *processExitType;
@property (readonly, nonatomic) NSString *processExitReason;
@property (readonly) unsigned long long processLaunchCount;
@property (readonly) unsigned long long processJetsamCount;
@property (readonly) unsigned long long processCrashCount;
@property (readonly) BOOL isConfigurationLoaded;
@property (readonly) BOOL isTTSUInProgress;
@property (readonly) BOOL eventSubmittedOnTimeOut;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


@end

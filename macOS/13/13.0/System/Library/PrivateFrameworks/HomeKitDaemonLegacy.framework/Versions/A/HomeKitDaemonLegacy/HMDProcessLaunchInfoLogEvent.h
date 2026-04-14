@class NSString, NSDictionary;

@interface HMDProcessLaunchInfoLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) long long submissionState;
@property (readonly, copy, nonatomic) NSString *dataSyncState;
@property (readonly) double timeIntervalSincePreviousProcessLaunch;
@property (readonly) unsigned long long millisecondsSinceLaunchToDataSyncStateGood;
@property (readonly) long long numUncommittedRecords;
@property (readonly) long long numUncommittedAndPushedRecords;
@property (readonly, nonatomic) NSString *processExitType;
@property (readonly, nonatomic) NSString *processExitReason;
@property (readonly) unsigned long long processLaunchCount;
@property (readonly) unsigned long long processJetsamCount;
@property (readonly) unsigned long long processCrashCount;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


@end

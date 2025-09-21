@class NSUUID, NSString, NSDictionary;

@interface HMDCameraRecordingUploadOperationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property double runTime;
@property (readonly) unsigned long long runTimeInMilliseconds;
@property unsigned long long operationType;
@property BOOL didCausePreviousClipToFinalizeDueToDurationLimit;
@property (readonly) unsigned long long totalClipDurationMilliseconds;
@property double totalClipDuration;
@property unsigned long long retryCount;
@property (readonly, copy) NSUUID *clipModelID;
@property (readonly) unsigned long long startTimestamp;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithClipModelID:(id)a0 operation:(id)a1;

@end

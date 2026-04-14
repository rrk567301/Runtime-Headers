@class NSString, NSDictionary;

@interface HMDUserSettingsPerHomeLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) BOOL isOwner;
@property (readonly) BOOL isAdmin;
@property (readonly) BOOL isRemoteAccessAllowed;
@property (readonly) BOOL isRecognizeMyVoiceEnabled;
@property (readonly) BOOL isPersonalRequestsEnabled;
@property (readonly) BOOL isAnnounceAccessAllowed;
@property (readonly) unsigned long long camerasAccessLevel;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


- (id)initWithUser:(id)a0;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (id)initWithUser:(id)a0 userDataController:(id)a1 homeUUID:(id)a2;

@end

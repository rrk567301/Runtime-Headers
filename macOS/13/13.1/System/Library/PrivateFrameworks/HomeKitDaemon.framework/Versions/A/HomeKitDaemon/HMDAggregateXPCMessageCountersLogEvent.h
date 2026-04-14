@class NSString, NSNumber, NSDictionary;

@interface HMDAggregateXPCMessageCountersLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *peerInformation;
@property (readonly, nonatomic) NSString *messageName;
@property (readonly, nonatomic) NSNumber *count;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;

+ (id)xpcAcceptedCountersLogEventWithPeerInformation:(id)a0 messageName:(id)a1 count:(id)a2;
+ (id)xpcSentCountersLogEventWithPeerInformation:(id)a0 messageName:(id)a1 count:(id)a2;
+ (id)xpcFilteredCountersLogEventWithPeerInformation:(id)a0 messageName:(id)a1 count:(id)a2;

@end

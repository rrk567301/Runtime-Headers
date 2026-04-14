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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcAcceptedCountersLogEventWithPeerInformation:(id)a0 messageName:(id)a1 count:(id)a2;
+ (id)xpcSentCountersLogEventWithPeerInformation:(id)a0 messageName:(id)a1 count:(id)a2;
+ (id)xpcFilteredCountersLogEventWithPeerInformation:(id)a0 messageName:(id)a1 count:(id)a2;

- (void).cxx_destruct;
- (id)initWithEventName:(id)a0 peerInformation:(id)a1 messageName:(id)a2 count:(id)a3;

@end

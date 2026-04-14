@class NSString, NSDictionary;

@interface HMDMediaDestinationControllerTransactionUpdatedDestinationLogEvent : HMDMediaDestinationControllerDestinationLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


- (id)initWithExistingDestinationType:(id)a0 destinationType:(id)a1 isTriggeredOnControllerDevice:(id)a2 userPrivilege:(id)a3;

@end

@class NSString, NSDictionary;

@interface HMDAppleMediaAccessoryDailySetRoomEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, copy) NSString *currentRoom;
@property (readonly, copy) NSString *previousRoom;

+ (id)filterToAllowedRoomName:(id)a0;

@end

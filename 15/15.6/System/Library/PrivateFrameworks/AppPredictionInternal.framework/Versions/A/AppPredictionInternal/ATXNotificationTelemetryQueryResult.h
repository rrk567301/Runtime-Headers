@class ATXUserNotificationResolution, NSUUID, NSString, NSDate;

@interface ATXNotificationTelemetryQueryResult : NSObject

@property (retain, nonatomic) NSUUID *notificationUUID;
@property (retain, nonatomic) NSDate *receiveTimestamp;
@property (nonatomic) long long deliveryMethod;
@property (nonatomic) long long urgency;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) char isMessage;
@property (retain, nonatomic) NSString *destinationReason;
@property (retain, nonatomic) NSString *originalDestination;
@property (retain, nonatomic) NSString *finalDestination;
@property (retain, nonatomic) NSString *receiveModeIdentifier;
@property (retain, nonatomic) ATXUserNotificationResolution *resolution;
@property (nonatomic) unsigned long long bodyLength;
@property (nonatomic) unsigned long long titleLength;
@property (nonatomic) unsigned long long subtitleLength;
@property (nonatomic) char isSummarized;
@property (nonatomic) unsigned long long summaryLength;
@property (nonatomic) char isPartOfStack;
@property (nonatomic) char isStackSummary;
@property (nonatomic) char isDeliveredInPrioritySection;
@property (nonatomic) unsigned long long numberOfNotificationsInStack;
@property (nonatomic) unsigned long long notificationPriorityStatus;
@property (nonatomic) unsigned long long notificationSummaryStatus;
@property (nonatomic) char isPriorityNotificationEnabled;
@property (nonatomic) char isNotificationSummaryEnabled;
@property (retain, nonatomic) NSDate *nextAppLaunchTimestamp;

- (void).cxx_destruct;

@end

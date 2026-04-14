@class NSMapTable, NSDate;

@interface MSPSharedTripNotificationRules : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long maxPostedNotifications;
@property (nonatomic) unsigned long long postedNotifications;
@property (nonatomic) double minimumETADifference;
@property (nonatomic) double minimumNotificationInterval;
@property (retain, nonatomic) NSDate *lastPostedETADate;
@property (retain, nonatomic) NSDate *lastPostedNotificationDate;
@property (retain, nonatomic) NSDate *lastUpdatedDate;
@property (retain, nonatomic) NSDate *currentETADate;
@property (nonatomic) BOOL hasMadeFinalPush;
@property (retain, nonatomic) NSMapTable *intermediateArrivalWaypointPostedNotifications;

+ (id)unarchivingObjectsSet;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMaximumNumberOfNotifications:(unsigned long long)a0;
- (id)initWithMaximumNumberOfNotifications:(unsigned long long)a0 minimumNotificationInterval:(double)a1;
- (void)didPostNotificationType:(unsigned long long)a0 forState:(id)a1;
- (unsigned long long)currentlyNecessaryNotificationTypeForState:(id)a0;
- (void)didReceiveUpdateWithETA:(double)a0 lastUpdated:(double)a1;
- (void)incrementMinimumETADifference;
- (double)minimumETADifferenceIncrement;
- (BOOL)hasSentNotificationType:(unsigned long long)a0 forState:(id)a1 waypoint:(id)a2;

@end

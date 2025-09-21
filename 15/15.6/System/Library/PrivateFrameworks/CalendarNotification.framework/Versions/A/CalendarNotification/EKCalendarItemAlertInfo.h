@class NSTimeZone, NSString, NSUserActivity, NSURL, NSDate, NSData, EKTravelEngineHypothesis;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying>

@property (nonatomic) long long triggerType;
@property (readonly, nonatomic) NSString *recordID;
@property (readonly, nonatomic) NSString *publisherBulletinID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSTimeZone *eventTimeZone;
@property (readonly, nonatomic) NSUserActivity *appLink;
@property (readonly, nonatomic) NSURL *entityID;
@property (readonly, nonatomic) char allDay;
@property (readonly, nonatomic) char tentative;
@property (readonly, nonatomic) long long proximity;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) int databaseID;
@property (readonly, nonatomic) char acknowledged;
@property (readonly, nonatomic) NSString *dismissalID;
@property (readonly, nonatomic) NSString *alarmID;
@property (readonly, nonatomic) char refiring;
@property (readonly, nonatomic) char isOffsetFromTravelTimeStart;
@property (readonly, nonatomic) char isPseudoEvent;
@property (retain, nonatomic) NSData *mapKitHandle;
@property (nonatomic) char hasGeoLocationCoordinates;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } geoLocationCoordinates;
@property (nonatomic) char hasOrganizerThatIsNotCurrentUser;
@property (copy, nonatomic) NSString *organizerEmailAddress;
@property (copy, nonatomic) NSString *startLocationRouting;
@property (copy, nonatomic) NSString *locationAddress;
@property (retain, nonatomic) EKTravelEngineHypothesis *latestHypothesis;
@property (copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (copy, nonatomic) NSDate *lastTimeBulletinAdded;
@property (nonatomic) char isSuggestedLocation;
@property (nonatomic) char isOnSharedCalendar;
@property (nonatomic) char hasDisplayedLeaveByMessage;
@property (nonatomic) char hasDisplayedLeaveNowMessage;
@property (nonatomic) char hasDisplayedRunningLateMessage;
@property (nonatomic) unsigned long long currentRouteHypothesizerNotificationType;
@property (copy, nonatomic) NSDate *fireDate;
@property (readonly, nonatomic) char isPurelyATimeToLeaveAlert;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 location:(id)a1 date:(id)a2 endDate:(id)a3 timeZone:(id)a4 allDay:(char)a5 tentative:(char)a6 publisherBulletinID:(id)a7 entityID:(id)a8 appLink:(id)a9 proximity:(long long)a10 externalID:(id)a11 databaseID:(int)a12 acknowledged:(char)a13 dismissalID:(id)a14 alarmID:(id)a15 isOffsetFromTravelTimeStart:(char)a16 refiring:(char)a17 pseudoEvent:(char)a18;
- (void)resetTimeToLeaveDisplayState;

@end

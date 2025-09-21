@class NSString, NSNumber, NSDate;

@interface EKCalendarResourceChangeNotification : EKCalendarNotification

@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *calendarName;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *startDateForNextOccurrence;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) char allDay;
@property (retain, nonatomic) NSString *eventID;
@property (nonatomic) unsigned int changeType;
@property (nonatomic) char dateChanged;
@property (nonatomic) char timeChanged;
@property (nonatomic) char locationChanged;
@property (nonatomic) char titleChanged;
@property (retain, nonatomic) NSNumber *createCount;
@property (retain, nonatomic) NSNumber *updateCount;
@property (retain, nonatomic) NSNumber *deleteCount;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (char)acknowledgeWithEventStore:(id)a0 error:(id *)a1;
- (char)needsAlert;
- (id)resourceChangeFromEventStore:(id)a0;

@end

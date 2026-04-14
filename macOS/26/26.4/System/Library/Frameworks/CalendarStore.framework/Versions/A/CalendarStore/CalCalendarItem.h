@class NSArray, NSMutableDictionary, NSString, NSURL, NSDate, CalCalendar, EKCalendarItem;

@interface CalCalendarItem : NSObject <NSCopying>

@property (retain, nonatomic) EKCalendarItem *ekCalendarItem;
@property (retain, nonatomic) NSMutableDictionary *unsavedRelateToDictionary;
@property (retain) CalCalendar *calendar;
@property (copy) NSString *notes;
@property (copy) NSURL *url;
@property (copy) NSString *title;
@property (readonly, copy) NSString *uid;
@property (readonly, copy) NSDate *dateStamp;
@property (copy) NSArray *alarms;

+ (id)sortedAlarms:(id)a0;

- (void)addAlarm:(id)a0;
- (void)removeAlarm:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)nextAlarmDate;
- (unsigned long long)hash;
- (id)description;
- (void)addAlarms:(id)a0;
- (BOOL)hasAlarm;
- (id)initWithEKCalendarItem:(id)a0;
- (void)removeAlarms:(id)a0;
- (id)sortedAlarms;

@end

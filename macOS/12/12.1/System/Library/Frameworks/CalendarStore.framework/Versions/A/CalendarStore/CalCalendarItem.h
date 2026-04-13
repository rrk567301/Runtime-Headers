@class NSString, NSArray, NSURL, NSDate, CalCalendar;

@interface CalCalendarItem : NSObject <NSCopying> {
    void *_reserved;
}

@property (copy) id managedObjectIDString;
@property (copy) NSDate *dateStamp;
@property (copy) NSString *uid;
@property (retain) CalCalendar *calendar;
@property (copy) NSString *notes;
@property (copy) NSURL *url;
@property (copy) NSString *title;
@property (copy) NSArray *alarms;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithTitle:(id)a0 UID:(id)a1;
- (BOOL)hasAlarm;
- (void)addAlarm:(id)a0;
- (id)nextAlarmDate;
- (void)addAlarms:(id)a0;
- (void)removeAlarm:(id)a0;
- (void)removeAlarms:(id)a0;

@end

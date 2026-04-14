@interface AMEventKitSoftLinking : NSObject

+ (void *)framework;
+ (void)softLink;
+ (Class)EKEventStore;
+ (Class)EKCalendar;
+ (Class)EKCalendarItem;
+ (Class)EKEvent;
+ (Class)EKReminder;
+ (Class)EKAlarm;
+ (id)EKErrorDomain;

@end

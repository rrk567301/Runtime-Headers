@class NSString, NSDate;

@interface PCScheduleSystemWakeOperation : NSOperation {
    char _scheduleOrCancel;
    char _userVisible;
    NSDate *_wakeDate;
    double _acceptableDelay;
    NSString *_serviceIdentifier;
    void *_unqiueIdentifier;
}

- (void).cxx_destruct;
- (void)main;
- (id)initForScheduledWake:(char)a0 wakeDate:(id)a1 acceptableDelay:(double)a2 userVisible:(char)a3 serviceIdentifier:(id)a4 uniqueIdentifier:(void *)a5;

@end

@class _PASLock;

@interface PPCalendarInternPool : NSObject {
    _PASLock *_poolLock;
}

- (id)init;
- (void)clearPool;
- (id)internedCalendarWithEKCalendar:(id)a0;
- (void).cxx_destruct;

@end

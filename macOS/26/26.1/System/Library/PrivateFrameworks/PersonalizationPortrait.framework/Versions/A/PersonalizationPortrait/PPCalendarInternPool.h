@class _PASLock;

@interface PPCalendarInternPool : NSObject {
    _PASLock *_poolLock;
}

- (id)internedCalendarWithEKCalendar:(id)a0;
- (void)clearPool;
- (void).cxx_destruct;
- (id)init;

@end

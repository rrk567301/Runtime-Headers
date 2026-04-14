@class _PASLock;

@interface PPCalendarInternPool : NSObject {
    _PASLock *_poolLock;
}

- (void)clearPool;
- (void).cxx_destruct;
- (id)internedCalendarWithEKCalendar:(id)a0;
- (id)init;

@end

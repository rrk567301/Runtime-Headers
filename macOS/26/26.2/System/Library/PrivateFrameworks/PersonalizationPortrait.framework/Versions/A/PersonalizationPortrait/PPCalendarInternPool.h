@class _PASLock;

@interface PPCalendarInternPool : NSObject {
    _PASLock *_poolLock;
}

- (id)internedCalendarWithEKCalendar:(id)a0;
- (void).cxx_destruct;
- (void)clearPool;
- (id)init;

@end

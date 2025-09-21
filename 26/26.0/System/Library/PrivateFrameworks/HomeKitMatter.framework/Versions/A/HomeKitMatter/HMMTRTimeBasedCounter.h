@interface HMMTRTimeBasedCounter : NSObject {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _timeBasedCounterlock;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long threshold;
@property (nonatomic) double startTime;

- (BOOL)_startNewCountingPeriod:(double)a0;
- (BOOL)incrementOrReset;
- (id)initTimeBasedCounter:(unsigned long long)a0;
- (void)resetTimeBasedCounter;

@end

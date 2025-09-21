@class NSPredicate;

@interface BRCSyncThrottle : BRCThrottle

@property (retain, nonatomic) NSPredicate *predicate;

- (void).cxx_destruct;
- (char)_validateThrottleParams:(id)a0;
- (id)initWithName:(id)a0 andParameters:(id)a1;
- (char)matchesItem:(id)a0 nsecsToRetry:(unsigned long long *)a1 now:(unsigned long long)a2;

@end

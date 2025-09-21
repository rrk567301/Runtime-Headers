@class NSString;

@interface MTLIGAccelCounterSet : MTLCounterSetInternal {
    NSString *_structType;
}

- (id)getCounters;
- (id)initWith:(id)a0 counters:(id)a1 structType:(id)a2;

@end

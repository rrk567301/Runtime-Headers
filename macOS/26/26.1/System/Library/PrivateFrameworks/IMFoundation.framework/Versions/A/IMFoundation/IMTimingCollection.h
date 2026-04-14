@class NSMutableDictionary;

@interface IMTimingCollection : NSObject {
    NSMutableDictionary *_timings;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (BOOL)hasKey:(id)a0;
- (void)startTimingForKey:(id)a0;
- (void)removeTimingForKey:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)stopTimingForKey:(id)a0;
- (double)totalTimeForKey:(id)a0;
- (id)init;

@end

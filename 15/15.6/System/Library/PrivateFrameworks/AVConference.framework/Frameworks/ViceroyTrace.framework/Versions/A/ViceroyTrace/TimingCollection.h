@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TimingCollection : NSObject {
    NSMutableDictionary *timings;
    NSObject<OS_dispatch_queue> *queue;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (char)hasKey:(int)a0;
- (void)removeTimingForKey:(int)a0;
- (void)startTimingForKey:(int)a0;
- (void)stopTimingForKey:(int)a0;
- (double)totalTimeForKey:(int)a0;
- (char)isValidTimingForKey:(int)a0;
- (void)setStartTime:(double)a0 forKey:(int)a1;
- (void)setStopTime:(double)a0 forKey:(int)a1;
- (void)setTiming:(double)a0 forKey:(int)a1;
- (double)timingForKey:(int)a0;

@end

@class NSMutableDictionary;

@interface PUTimingManager : NSObject {
    NSMutableDictionary *_stopwatches;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (id)init;
- (void)removeStopwatchForKey:(id)a0;
- (id)stopwatchForKey:(id)a0;

@end

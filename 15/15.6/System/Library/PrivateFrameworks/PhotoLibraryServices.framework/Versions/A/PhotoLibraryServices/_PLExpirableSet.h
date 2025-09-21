@class NSMutableSet, NSMutableDictionary;

@interface _PLExpirableSet : NSObject {
    NSMutableSet *_set;
    NSMutableDictionary *_recentTouches;
    double _secondsToExpire;
}

- (void)dealloc;
- (void).cxx_destruct;
- (char)containsObject:(id)a0;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void)_touch:(id)a0;
- (char)_didExpireObject:(id)a0;
- (id)initWithSecondsToExpire:(double)a0;

@end

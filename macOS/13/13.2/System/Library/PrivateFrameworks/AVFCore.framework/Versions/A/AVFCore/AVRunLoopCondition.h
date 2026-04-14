@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {
    NSMutableArray *_runLoopStateList;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)signal;
- (void)wait;
- (BOOL)waitUntilDate:(id)a0;
- (void)broadcast;
- (void)waitInMode:(id)a0;
- (BOOL)waitUntilDate:(id)a0 inMode:(id)a1;
- (BOOL)_waitInMode:(id)a0 untilDate:(id)a1;
- (void)_signalRunLoopWithState:(id)a0;

@end

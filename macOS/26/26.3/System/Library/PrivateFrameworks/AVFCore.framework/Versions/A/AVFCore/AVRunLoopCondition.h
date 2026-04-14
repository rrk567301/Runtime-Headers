@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {
    NSMutableArray *_runLoopStateList;
}

+ (void)initialize;

- (void)signal;
- (BOOL)waitUntilDate:(id)a0;
- (BOOL)_waitInMode:(id)a0 untilDate:(id)a1;
- (id)init;
- (void)broadcast;
- (void)_signalRunLoopWithState:(id)a0;
- (void)dealloc;
- (void)wait;
- (BOOL)waitUntilDate:(id)a0 inMode:(id)a1;
- (void)waitInMode:(id)a0;

@end

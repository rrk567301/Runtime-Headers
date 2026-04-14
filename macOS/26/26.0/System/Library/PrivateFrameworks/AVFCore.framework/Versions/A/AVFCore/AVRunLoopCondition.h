@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {
    NSMutableArray *_runLoopStateList;
}

+ (void)initialize;

- (void)dealloc;
- (BOOL)_waitInMode:(id)a0 untilDate:(id)a1;
- (void)_signalRunLoopWithState:(id)a0;
- (void)signal;
- (void)broadcast;
- (BOOL)waitUntilDate:(id)a0 inMode:(id)a1;
- (void)waitInMode:(id)a0;
- (void)wait;
- (id)init;
- (BOOL)waitUntilDate:(id)a0;

@end

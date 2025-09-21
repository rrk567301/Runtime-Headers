@class NSCondition;

@interface AVEventWaiter : NSObject {
    NSCondition *_condition;
    char _eventCompleted;
}

- (void)dealloc;
- (id)init;
- (void)markEventAsCompleted;
- (void)waitUntilEventIsCompleted;

@end

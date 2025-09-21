@class NSDate, NSString, NSObject;
@protocol OS_dispatch_group;

@interface CKPlaceholderOperation : NSOperation {
    NSObject<OS_dispatch_group> *_group;
    int _executionState;
    char _finishInvoked;
    NSDate *_startDate;
    NSString *_operationID;
    id /* block */ _daemonInvokeBlock;
}

- (id)description;
- (void).cxx_destruct;
- (void)start;
- (char)isConcurrent;
- (char)isExecuting;
- (char)isFinished;
- (void)main;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;

@end

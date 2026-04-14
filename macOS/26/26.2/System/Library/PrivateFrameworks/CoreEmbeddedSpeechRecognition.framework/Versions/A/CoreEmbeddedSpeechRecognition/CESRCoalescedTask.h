@class NSNumber, NSDate;

@interface CESRCoalescedTask : NSObject {
    NSNumber *_taskId;
    NSNumber *_eventId;
    id /* block */ _runBlock;
    _Atomic BOOL _executed;
}

@property (readonly, nonatomic) NSDate *date;

- (void)execute;
- (void).cxx_destruct;
- (id)description;
- (id /* block */)_runBlockForTask:(id /* block */)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (id)initWithTaskId:(id)a0 eventId:(id)a1 date:(id)a2 taskBlock:(id /* block */)a3 completionQueue:(id)a4 completion:(id /* block */)a5;
- (void)executeAfterDelay:(double)a0 onQueue:(id)a1;
- (BOOL)isExecuted;

@end

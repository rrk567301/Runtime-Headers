@protocol AudioHistoryObjectDelegate;

@interface AudioHistoryObject : NSObject {
    struct shared_ptr<AudioHistory::ObjCObjectDelegateAdapter> { struct ObjCObjectDelegateAdapter *__ptr_; struct __shared_weak_count *__cntrl_; } _delegate;
    struct shared_ptr<AudioHistory::Object> { struct Object *__ptr_; struct __shared_weak_count *__cntrl_; } _object;
}

@property (weak, nonatomic) id<AudioHistoryObjectDelegate> delegate;

- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)writeEventWithSelector:(SEL)a0 withPayload:(id)a1 andTimeStamp:(struct AudioHistoryEventTimeStamp { unsigned long long x0; unsigned long long x1; })a2 andErrorHandler:(id /* block */)a3;
- (void)writeEventWithSelector:(SEL)a0 payload:(id)a1 debugDescription:(id)a2 timeStamp:(struct AudioHistoryEventTimeStamp { unsigned long long x0; unsigned long long x1; })a3 andErrorHandler:(id /* block */)a4;
- (BOOL)registerWithSystem:(id)a0 name:(id)a1 error:(id *)a2;
- (BOOL)unregisterFromSystem:(id)a0 error:(id *)a1;
- (void)writeEventWithType:(const char *)a0 withPayload:(id)a1;
- (void)writeEventWithType:(const char *)a0 withPayload:(id)a1 andErrorHandler:(id /* block */)a2;
- (void)writeEventWithSelector:(SEL)a0 withPayload:(id)a1;
- (void)writeEventWithSelector:(SEL)a0 withPayload:(id)a1 andErrorHandler:(id /* block */)a2;
- (void)writeEventWithType:(const char *)a0 withPayloadBlock:(id /* block */)a1;
- (void)writeEventWithType:(const char *)a0 withPayloadBlock:(id /* block */)a1 andErrorHandler:(id /* block */)a2;
- (void)writeEventWithSelector:(SEL)a0 withPayloadBlock:(id /* block */)a1;
- (void)writeEventWithSelector:(SEL)a0 withPayloadBlock:(id /* block */)a1 andErrorHandler:(id /* block */)a2;
- (void)writeEventWithType:(const char *)a0 withPayload:(id)a1 andTimeStamp:(struct AudioHistoryEventTimeStamp { unsigned long long x0; unsigned long long x1; })a2;
- (void)writeEventWithType:(const char *)a0 withPayload:(id)a1 andTimeStamp:(struct AudioHistoryEventTimeStamp { unsigned long long x0; unsigned long long x1; })a2 andErrorHandler:(id /* block */)a3;
- (void)writeEventWithSelector:(SEL)a0 withPayload:(id)a1 andTimeStamp:(struct AudioHistoryEventTimeStamp { unsigned long long x0; unsigned long long x1; })a2;
- (void)writeEventWithType:(const char *)a0 payload:(id)a1 debugDescription:(id)a2 andTimeStamp:(struct AudioHistoryEventTimeStamp { unsigned long long x0; unsigned long long x1; })a3;
- (void)writeEventWithType:(const char *)a0 payload:(id)a1 debugDescription:(id)a2 timeStamp:(struct AudioHistoryEventTimeStamp { unsigned long long x0; unsigned long long x1; })a3 andErrorHandler:(id /* block */)a4;
- (void)writeEventWithSelector:(SEL)a0 payload:(id)a1 debugDescription:(id)a2 andTimeStamp:(struct AudioHistoryEventTimeStamp { unsigned long long x0; unsigned long long x1; })a3;

@end

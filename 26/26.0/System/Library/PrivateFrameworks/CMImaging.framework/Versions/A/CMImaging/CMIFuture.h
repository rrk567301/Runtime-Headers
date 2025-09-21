@class NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CMIFuture : NSObject {
    NSObject<OS_dispatch_group> *_valueGroup;
    id _value;
    long long _valueStatus;
    BOOL _valueIsSet;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)combine:(id)a0;
+ (id)combine:(id)a0 initialValue:(id)a1 fold:(id /* block */)a2;
+ (id /* block */)commandBufferCompletionStatusHandler;
+ (id)futureErrorWithCommandBuffer:(id)a0 callbackQueue:(id)a1;
+ (id)futureErrorWithSharedEvent:(id)a0 waitValue:(unsigned long long)a1 listener:(id)a2;
+ (id)futureWithCommandBuffer:(id)a0 callbackQueue:(id)a1 valueHandler:(id /* block */)a2;

- (id)flatMap:(id /* block */)a0;
- (void)then:(id /* block */)a0;
- (void)setValue:(id)a0;
- (id)map:(id /* block */)a0;
- (void)cancel;
- (id)init;
- (id)initWithCallbackQueue:(id)a0;
- (void).cxx_destruct;
- (id)valueWaitingUpToTimeout:(unsigned long long)a0 status:(long long *)a1;
- (void)ifValue:(id /* block */)a0 otherwise:(id /* block */)a1;

@end

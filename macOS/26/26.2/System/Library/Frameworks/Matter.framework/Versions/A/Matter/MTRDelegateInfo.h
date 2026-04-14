@class NSObject;
@protocol OS_dispatch_queue;

@interface MTRDelegateInfo : NSObject

@property (readonly, weak, nonatomic) id delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) void *delegatePointerValue;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (BOOL)callDelegateWithBlock:(id /* block */)a0;

@end

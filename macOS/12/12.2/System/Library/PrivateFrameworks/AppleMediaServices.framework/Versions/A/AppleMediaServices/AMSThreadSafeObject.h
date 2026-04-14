@class NSObject;
@protocol OS_dispatch_queue;

@interface AMSThreadSafeObject : NSObject

@property (retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain) id underlyingObject;

- (id)init;
- (void)setObject:(id)a0;
- (id)initWithObject:(id)a0;
- (id)object;
- (void).cxx_destruct;
- (void)readWrite:(id /* block */)a0;
- (void)read:(id /* block */)a0;
- (id)accessAndSetObjectWithBlock:(id /* block */)a0;

@end

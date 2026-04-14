@class NSRecursiveLock;

@interface CHIPDevice : NSObject

@property (readonly, nonatomic) NSRecursiveLock *lock;
@property (readonly) void *cppDevice;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDevice:(void *)a0;
- (void *)internalDevice;
- (void)subscribeWithQueue:(id)a0 minInterval:(unsigned short)a1 maxInterval:(unsigned short)a2 reportHandler:(id /* block */)a3 subscriptionEstablished:(id /* block */)a4;

@end

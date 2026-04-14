@class NSRunLoop;

@interface IOThread : NSObject

@property (class, readonly, nonatomic) unsigned long long classCount;

@property (readonly, nonatomic) NSRunLoop *runLoop;

+ (void)decrementClassCount;
+ (void)incrementClassCount;
+ (void)initializeThread;

- (id)init;
- (void)dealloc;
- (void)dispatchAsync:(id /* block */)a0;
- (void)dispatchSync:(id /* block */)a0;

@end

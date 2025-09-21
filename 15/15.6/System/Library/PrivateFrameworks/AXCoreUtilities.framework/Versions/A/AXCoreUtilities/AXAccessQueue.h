@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AXAccessQueue : NSObject

@property (copy, nonatomic) NSString *threadLocalStorageKey;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (nonatomic) unsigned long long specialBehaviors;
@property (readonly, nonatomic) char behavesAsMainQueue;
@property (readonly, nonatomic) char behavesWithoutErrorReporting;
@property (readonly, copy, nonatomic) NSString *label;

+ (id)mainAccessQueue;
+ (id)backgroundAccessQueue;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)afterDelay:(double)a0 processWritingBlock:(id /* block */)a1;
- (void)performSynchronousReadingBlock:(id /* block */)a0;
- (void)afterDelay:(double)a0 processReadingBlock:(id /* block */)a1;
- (char)canReadInCurrentExecutionThread;
- (void)performSynchronousWritingBlock:(id /* block */)a0;
- (unsigned long long)_accessQueueContextInCurrentExecutionThread;
- (id)_initWithLabel:(id)a0 appendUUIDToLabel:(char)a1 specialBehaviors:(unsigned long long)a2;
- (void)_performBlock:(id /* block */)a0 withDispatchFunction:(void /* function */ *)a1 synchronously:(char)a2 accessQueueContext:(unsigned long long)a3;
- (char)canOnlyReadInCurrentExecutionThread;
- (char)canWriteInCurrentExecutionThread;
- (id)initWithLabel:(id)a0 appendUUIDToLabel:(char)a1;
- (id)initWithParentClass:(Class)a0 description:(id)a1 appendUUIDToLabel:(char)a2;
- (void)performAsynchronousReadingBlock:(id /* block */)a0;
- (void)performAsynchronousWritingBlock:(id /* block */)a0;

@end

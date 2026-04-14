@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AXAccessQueue : NSObject

@property (copy, nonatomic) NSString *threadLocalStorageKey;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (nonatomic) unsigned long long specialBehaviors;
@property (readonly, nonatomic) BOOL behavesAsMainQueue;
@property (readonly, nonatomic) BOOL behavesWithoutErrorReporting;
@property (readonly, copy, nonatomic) NSString *label;

+ (id)backgroundAccessQueue;
+ (id)mainAccessQueue;

- (BOOL)canOnlyReadInCurrentExecutionThread;
- (id)_initWithLabel:(id)a0 appendUUIDToLabel:(BOOL)a1 specialBehaviors:(unsigned long long)a2;
- (void)performSynchronousWritingBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 appendUUIDToLabel:(BOOL)a1;
- (void)afterDelay:(double)a0 processWritingBlock:(id /* block */)a1;
- (void)afterDelay:(double)a0 processReadingBlock:(id /* block */)a1;
- (id)initWithParentClass:(Class)a0 description:(id)a1 appendUUIDToLabel:(BOOL)a2;
- (id)description;
- (void)performSynchronousReadingBlock:(id /* block */)a0;
- (BOOL)canWriteInCurrentExecutionThread;
- (void).cxx_destruct;
- (void)performAsynchronousWritingBlock:(id /* block */)a0;
- (unsigned long long)_accessQueueContextInCurrentExecutionThread;
- (BOOL)canReadInCurrentExecutionThread;
- (void)_performBlock:(id /* block */)a0 withDispatchFunction:(void /* function */ *)a1 synchronously:(BOOL)a2 accessQueueContext:(unsigned long long)a3;
- (void)performAsynchronousReadingBlock:(id /* block */)a0;
- (id)init;

@end

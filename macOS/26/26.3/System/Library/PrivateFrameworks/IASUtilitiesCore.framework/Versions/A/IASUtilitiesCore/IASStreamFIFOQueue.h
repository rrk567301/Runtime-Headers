@class NSObject, IASThreadSafeEvent, NSLock, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface IASStreamFIFOQueue : NSObject

@property (retain) NSObject<OS_dispatch_semaphore> *fifoSemaphore;
@property (retain) NSLock *queueLock;
@property (retain) NSMutableArray *queue;
@property (retain) IASThreadSafeEvent *hasDataEvent;

- (id)pop;
- (void).cxx_destruct;
- (id)initWithDepth:(unsigned long long)a0;
- (void)push:(id)a0;

@end

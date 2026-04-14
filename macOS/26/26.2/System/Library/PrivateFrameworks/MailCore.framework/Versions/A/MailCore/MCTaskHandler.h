@class NSOperationQueue, NSDate, NSObject, MCTaskHandlerOperation;
@protocol OS_os_log, MCHandlerDelegate;

@interface MCTaskHandler : NSObject {
    MCTaskHandlerOperation *_operation;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL isCleaningUp;
@property (retain, nonatomic) NSDate *cancelTime;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (readonly, nonatomic) NSOperationQueue *serializationQueue;
@property (weak, nonatomic) id<MCHandlerDelegate> delegate;
@property (retain, nonatomic) MCTaskHandlerOperation *operation;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) long long qualityOfService;

+ (id)keyPathsForValuesAffectingPriority;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)cleanUp;
- (id)init;
- (void)dealloc;
- (id)newCleanUpOperation;
- (void)_operationDidFinish:(id)a0;

@end

@class NSString, NSArray, NSOperationQueue;

@interface PLLibraryServicesStateNode : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSOperationQueue *_lock_operationQueue;
    unsigned int _lock_qos;
}

@property (readonly, copy) NSString *logPrefix;
@property (readonly) long long state;
@property (readonly) unsigned long long operationCount;
@property unsigned int qos;
@property (readonly, copy) NSArray *operations;

+ (void)removeOperationCountObserver:(id)a0 fromObservedObject:(id)a1 context:(void *)a2;

- (void)setOperationQueue:(id)a0;
- (id)operationQueue;
- (void)run;
- (id)description;
- (void)terminate;
- (BOOL)enqueueOperation:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithLibraryServicesState:(long long)a0 qualityOfService:(unsigned int)a1 logPrefix:(id)a2;
- (id)addOperationCountObserver:(id)a0 context:(void *)a1;

@end

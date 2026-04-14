@class NSString, NSArray, NSOperationQueue;

@interface PLLibraryServicesStateNode : NSObject {
    NSOperationQueue *_operationQueue;
}

@property (readonly, copy) NSString *logPrefix;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) unsigned long long operationCount;
@property (nonatomic) unsigned int qos;
@property (readonly, copy, nonatomic) NSArray *operations;

+ (void)removeOperationCountObserver:(id)a0 fromObservedObject:(id)a1 context:(void *)a2;

- (id)description;
- (void)run;
- (void).cxx_destruct;
- (void)terminate;
- (id)addOperationCountObserver:(id)a0 context:(void *)a1;
- (BOOL)enqueueOperation:(id)a0 error:(id *)a1;
- (id)initWithLibraryServicesState:(long long)a0 qualityOfService:(unsigned int)a1 logPrefix:(id)a2;

@end

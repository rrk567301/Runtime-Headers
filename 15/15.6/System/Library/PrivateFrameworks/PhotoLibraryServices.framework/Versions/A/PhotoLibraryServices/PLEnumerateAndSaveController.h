@class NSString, NSOperationQueue, NSError, NSFetchRequest, NSManagedObjectContext;

@interface PLEnumerateAndSaveController : NSObject {
    _Atomic BOOL _cancelled;
    unsigned long long _options;
}

@property (readonly, nonatomic, getter=isConcurrent) char concurrent;
@property (retain, nonatomic) NSString *operationName;
@property (retain, nonatomic) NSManagedObjectContext *originalContext;
@property (retain, nonatomic) NSFetchRequest *originalFetchRequest;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic, getter=shouldRefreshAllAfterSave) char refreshesAllAfterSave;
@property (readonly, nonatomic, getter=isReadOnly) char readOnly;
@property (copy, nonatomic) id /* block */ processResultBlock;
@property (copy, nonatomic) id /* block */ processResultsBlock;
@property (copy, nonatomic) id /* block */ generateContextBlock;
@property (copy, nonatomic) id /* block */ didFetchObjectIDsBlock;
@property (nonatomic) char succeeded;
@property (retain, nonatomic) NSError *firstError;
@property (nonatomic) long long itemsPerBatch;
@property (readonly, nonatomic) char isCancelled;

+ (char)_concurrencyLimiterEnabledForContext:(id)a0;
+ (void)disableConcurrencyLimiterForContext:(id)a0;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 fetchRequest:(id)a1 context:(id)a2 options:(unsigned long long)a3 generateContextBlock:(id /* block */)a4 didFetchObjectIDsBlock:(id /* block */)a5 processResultBlock:(id /* block */)a6;
- (char)processObjectsWithError:(id *)a0;
- (id)_initWithName:(id)a0 fetchRequest:(id)a1 context:(id)a2 options:(unsigned long long)a3 generateContextBlock:(id /* block */)a4 didFetchObjectIDsBlock:(id /* block */)a5 processResultBlock:(id /* block */)a6 processResultsBlock:(id /* block */)a7;
- (void)_inq_runOperationWithObjectIDs:(id)a0 onContext:(id)a1;
- (id)initWithName:(id)a0 fetchRequest:(id)a1 context:(id)a2 options:(unsigned long long)a3 generateContextBlock:(id /* block */)a4 didFetchObjectIDsBlock:(id /* block */)a5 processResultsBlock:(id /* block */)a6;

@end

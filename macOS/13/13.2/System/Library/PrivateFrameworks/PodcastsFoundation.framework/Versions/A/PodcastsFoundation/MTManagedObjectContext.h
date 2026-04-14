@class NSString;

@interface MTManagedObjectContext : NSManagedObjectContext

@property (nonatomic) long long type;
@property (nonatomic) BOOL isResetable;
@property (readonly, nonatomic) NSString *mt_immutableName;

- (void).cxx_destruct;
- (void)reset;
- (void)performBlock:(id /* block */)a0;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (id)objectWithID:(id)a0;
- (void)deleteObject:(id)a0;
- (void)insertObject:(id)a0;
- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)existingObjectWithID:(id)a0 error:(id *)a1;
- (void)performBlockAndWait:(id /* block */)a0;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (id)objectRegisteredForID:(id)a0;
- (id)initWithConcurrencyType:(unsigned long long)a0 name:(id)a1;
- (void)validatePodcastDeletion:(id)a0;
- (BOOL)handleError:(id *)a0 withCallback:(id /* block */)a1;
- (BOOL)_isInternalCoreDataQueue;
- (void)validateConcurencyType;

@end

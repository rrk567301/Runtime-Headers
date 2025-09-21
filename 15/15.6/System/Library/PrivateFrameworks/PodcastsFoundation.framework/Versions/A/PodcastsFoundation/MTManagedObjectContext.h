@class NSString;

@interface MTManagedObjectContext : NSManagedObjectContext

@property (nonatomic) long long type;
@property (nonatomic) char isResetable;
@property (readonly, nonatomic) NSString *mt_immutableName;

- (id)name;
- (void).cxx_destruct;
- (void)reset;
- (void)performBlock:(id /* block */)a0;
- (void)deleteObject:(id)a0;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (id)objectWithID:(id)a0;
- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)existingObjectWithID:(id)a0 error:(id *)a1;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (void)insertObject:(id)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (id)objectRegisteredForID:(id)a0;
- (char)_isInternalCoreDataQueue;
- (char)handleError:(id *)a0 withCallback:(id /* block */)a1;
- (id)initWithConcurrencyType:(unsigned long long)a0 name:(id)a1;
- (void)validateConcurencyType;
- (void)validatePodcastDeletion:(id)a0;

@end

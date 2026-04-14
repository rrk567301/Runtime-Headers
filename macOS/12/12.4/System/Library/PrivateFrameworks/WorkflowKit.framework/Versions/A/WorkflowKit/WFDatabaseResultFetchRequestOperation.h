@class NSFetchRequest;

@interface WFDatabaseResultFetchRequestOperation : WFDatabaseResultFetchOperation

@property (readonly, nonatomic) NSFetchRequest *fetchRequest;

- (id)description;
- (void).cxx_destruct;
- (id)entity;
- (id)initWithFetchRequest:(id)a0;
- (id)resultsWithContext:(id)a0 error:(id *)a1;
- (long long)countWithContext:(id)a0 error:(id *)a1;

@end

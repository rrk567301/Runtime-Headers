@class NSArray;

@interface _CNAutocompleteObservableBuilderBatchingHelper : NSObject

@property (readonly, nonatomic) NSArray *batches;

- (void).cxx_destruct;
- (id)batchedObservables;
- (id)initWithBatchCount:(unsigned long long)a0;
- (void)addObservable:(id)a0 toBatchAtIndex:(unsigned long long)a1;

@end

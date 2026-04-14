@class NSArray;

@interface MapsSync.MapsSyncDictionaryQueryOptions : MapsSync.MapsSyncQueryOptions {
    void /* function */ propertiesToFetch;
    void /* function */ propertiesToGroupBy;
}

@property (nonatomic, readonly) NSArray *propertiesToFetch;
@property (nonatomic, copy) NSArray *propertiesToGroupBy;

- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 sortDescriptors:(id)a1 range:(id)a2;
- (id)initWithOptions:(id)a0;
- (void)updateWithOptions:(id)a0;
- (id)initWithPropertiesToFetch:(id)a0 groupBy:(id)a1 expression:(id)a2;

@end

@protocol OKCollectionProxyDataSource;

@interface OKCollectionProxy : NSDictionary

@property (nonatomic) id<OKCollectionProxyDataSource> dataSource;
@property (nonatomic) unsigned long long tag;

- (void)dealloc;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)init;
- (id)keyEnumerator;
- (id)initWithObjects:(id)a0 forKeys:(id)a1;
- (id)objectAtIndexPath:(id)a0;

@end

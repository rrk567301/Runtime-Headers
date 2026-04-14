@protocol OKCollectionProxyDataSource;

@interface OKCollectionProxy : NSDictionary

@property (nonatomic) id<OKCollectionProxyDataSource> dataSource;
@property (nonatomic) unsigned long long tag;

- (id)objectForKey:(id)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)init;
- (id)initWithObjects:(id)a0 forKeys:(id)a1;
- (id)objectAtIndexPath:(id)a0;

@end

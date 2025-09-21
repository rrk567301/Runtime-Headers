@class KHProjectSubgroup, NSMutableArray;

@interface KHProjectSubgroupLayoutsDataSource : KHLayoutCollectionDataSource

@property (readonly, nonatomic) NSMutableArray *observedLayouts;
@property (readonly, nonatomic) KHProjectSubgroup *projectSubgroup;

+ (long long)physicalNumberOfItemsInProjectSubgroup:(id)a0;

- (long long)numberOfItemsInSection:(long long)a0;
- (id)theme;
- (id)debugDescription;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)titleForSection:(long long)a0;
- (long long)physicalNumberOfItemsInSection:(long long)a0;
- (void)addObserverForLayouts;
- (id)indexPathForLayout:(id)a0;
- (id)initWithProjectSubgroup:(id)a0;
- (double)largestLayoutSideInSection:(long long)a0;
- (id)layoutAtIndexPath:(id)a0;
- (void)removeObserverForLayouts;
- (id)subtitleForSection:(long long)a0;

@end

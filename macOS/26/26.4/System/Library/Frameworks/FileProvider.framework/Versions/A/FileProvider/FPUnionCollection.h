@class NSArray;

@interface FPUnionCollection : FPItemCollection {
    NSArray *_collections;
}

@property (retain, nonatomic) NSArray *collections;

- (void).cxx_destruct;
- (id)description;
- (id)createDataSourceWithSortDescriptors:(id)a0;
- (id)initWithCollections:(id)a0;

@end

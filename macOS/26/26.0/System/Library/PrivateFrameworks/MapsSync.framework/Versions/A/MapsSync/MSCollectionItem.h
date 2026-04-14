@interface MSCollectionItem : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _collections;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) long long positionIndex;

- (id)initWithCollection:(id)a0;
- (void).cxx_destruct;
- (void)removeCollection:(id)a0;
- (void)addCollection:(id)a0;
- (id)fetchCollections;
- (void)flushChanges;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2 parent:(BOOL)a3;
- (id)initWithPositionIndex:(long long)a0;
- (id)initWithStore:(id)a0 positionIndex:(long long)a1;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1 parent:(BOOL)a2;

@end

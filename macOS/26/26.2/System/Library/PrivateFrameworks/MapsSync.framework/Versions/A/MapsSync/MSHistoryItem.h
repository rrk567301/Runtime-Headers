@interface MSHistoryItem : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _position;
    void /* unknown type, empty encoding */ _positionIndex;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) double position;
@property (nonatomic) long long positionIndex;

+ (BOOL)beforeFetchWithStore:(id)a0 context:(id)a1 error:(id *)a2;
+ (id)optionsWith:(id)a0;
+ (id)postProcessWithResults:(id)a0 options:(id)a1 context:(id)a2 error:(id *)a3;
+ (void)pruneHistoryItemsWithContext:(id)a0;

- (id)initWithPosition:(double)a0 positionIndex:(long long)a1;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2 parent:(BOOL)a3;
- (id)initWithStore:(id)a0 position:(double)a1 positionIndex:(long long)a2;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1 parent:(BOOL)a2;

@end

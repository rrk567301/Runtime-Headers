@class NSString, NSNumber, GEOMapItemStorage;

@interface MSCachedMapItemStorage : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _customName;
    void /* unknown type, empty encoding */ _latitude;
    void /* unknown type, empty encoding */ _longitude;
    void /* unknown type, empty encoding */ _mapItemStorage;
    void /* unknown type, empty encoding */ _muid;
    void /* unknown type, empty encoding */ _resultsProvider;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSString *customName;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, retain) NSNumber *resultsProvider;

+ (BOOL)beforeFetchWithStore:(id)a0 context:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithCustomName:(id)a0 latitude:(id)a1 longitude:(id)a2 mapItemStorage:(id)a3 muid:(id)a4 resultsProvider:(id)a5;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2 parent:(BOOL)a3;
- (id)initWithStore:(id)a0 customName:(id)a1 latitude:(id)a2 longitude:(id)a3 mapItemStorage:(id)a4 muid:(id)a5 resultsProvider:(id)a6;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1 parent:(BOOL)a2;

@end

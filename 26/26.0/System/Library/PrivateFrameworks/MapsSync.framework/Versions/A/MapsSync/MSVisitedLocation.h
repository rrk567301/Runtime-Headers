@class GEOMapItemStorage, NSString, NSDate, NSNumber, NSError;

@interface MSVisitedLocation : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _enclosingRegionMuid;
    void /* unknown type, empty encoding */ _enclosingRegionProvider;
    void /* unknown type, empty encoding */ _hidden;
    void /* unknown type, empty encoding */ _latestVisitDate;
    void /* unknown type, empty encoding */ _latitude;
    void /* unknown type, empty encoding */ _longitude;
    void /* unknown type, empty encoding */ _mapItemAddress;
    void /* unknown type, empty encoding */ _mapItemCategory;
    void /* unknown type, empty encoding */ _mapItemCity;
    void /* unknown type, empty encoding */ _mapItemIdentifier;
    void /* unknown type, empty encoding */ _mapItemLastRefreshed;
    void /* unknown type, empty encoding */ _mapItemName;
    void /* unknown type, empty encoding */ _mapItemStorage;
    void /* unknown type, empty encoding */ _mapItemTopLevelCategory;
    void /* unknown type, empty encoding */ _muid;
    void /* unknown type, empty encoding */ _visits;
}

@property (class, nonatomic, readonly) NSString *key;
@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, retain) NSNumber *enclosingRegionMuid;
@property (nonatomic, retain) NSNumber *enclosingRegionProvider;
@property (nonatomic) BOOL hidden;
@property (nonatomic, readonly) NSDate *latestVisitDate;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSString *mapItemAddress;
@property (nonatomic, copy) NSString *mapItemCategory;
@property (nonatomic, copy) NSString *mapItemCity;
@property (nonatomic, copy) NSString *mapItemIdentifier;
@property (nonatomic, copy) NSDate *mapItemLastRefreshed;
@property (nonatomic, copy) NSString *mapItemName;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic) int mapItemTopLevelCategory;
@property (nonatomic, retain) NSNumber *muid;

+ (BOOL)beforeFetchWithStore:(id)a0 context:(id)a1 error:(id *)a2;
+ (BOOL)mergeDuplicatesWithStore:(id)a0 context:(id)a1 error:(id *)a2;
+ (id)optionsWith:(id)a0;

- (void).cxx_destruct;
- (void)addVisit:(id)a0;
- (void)removeVisit:(id)a0;
- (id)fetchVisits;
- (void)flushChanges;
- (id)initWithEnclosingRegionMuid:(id)a0 enclosingRegionProvider:(id)a1 hidden:(BOOL)a2 latitude:(id)a3 longitude:(id)a4 mapItemAddress:(id)a5 mapItemCategory:(id)a6 mapItemCity:(id)a7 mapItemIdentifier:(id)a8 mapItemLastRefreshed:(id)a9 mapItemName:(id)a10 mapItemStorage:(id)a11 mapItemTopLevelCategory:(int)a12 muid:(id)a13;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2 parent:(BOOL)a3;
- (id)initWithStore:(id)a0 enclosingRegionMuid:(id)a1 enclosingRegionProvider:(id)a2 hidden:(BOOL)a3 latitude:(id)a4 longitude:(id)a5 mapItemAddress:(id)a6 mapItemCategory:(id)a7 mapItemCity:(id)a8 mapItemIdentifier:(id)a9 mapItemLastRefreshed:(id)a10 mapItemName:(id)a11 mapItemStorage:(id)a12 mapItemTopLevelCategory:(int)a13 muid:(id)a14;
- (void)noteWithCompletionHandler:(void (^)(NSString *, NSError *))a0;
- (void)setNote:(NSString *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1 parent:(BOOL)a2;

@end

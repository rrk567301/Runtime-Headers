@class NSError, _GEORegionStoreSharedCache, NSString, GEOSQLiteDB, NSLocale, geo_isolater, GEORegionInfo, NSMutableArray;
@protocol _GEORegionStoreCollator;

@interface GEORegionStore : NSObject {
    _GEORegionStoreSharedCache *_cache;
    geo_isolater *_dbIsolater;
    unsigned long long _area;
    GEOSQLiteDB *_db;
    _Atomic BOOL _ignoreDBChangeNotification;
    NSLocale *_locale;
    long long _dataBuildId;
    id<_GEORegionStoreCollator> _defaultCollator;
    NSMutableArray *_nextCollators;
}

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) unsigned long long dataBuildId;
@property (copy, nonatomic) id /* block */ databaseTornDownCallback;

+ (Class)searchManagerClass;
+ (void)setSearchManagerClass:(Class)a0;

- (id)initWithLocale:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_regionsRelatedToRegionId:(unsigned long long)a0 types:(unsigned int)a1 cursor:(id /* block */)a2 finished:(id /* block */)a3;
- (void)_updateArea;
- (void)_updateDB;
- (void)childRegionsOfRegionId:(unsigned long long)a0 types:(unsigned int)a1 sort:(unsigned long long)a2 recursive:(BOOL)a3 cursor:(id /* block */)a4 finished:(id /* block */)a5;
- (void)formattedNameForRegion:(GEORegionInfo *)a0 result:(void (^)(NSString *, NSError *))a1;
- (id)initWithCurrentLocale;
- (id)initWithLocaleName:(id)a0;
- (void)parentRegionsOfRegionId:(unsigned long long)a0 types:(unsigned int)a1 sort:(unsigned long long)a2 recursive:(BOOL)a3 cursor:(id /* block */)a4 finished:(id /* block */)a5;
- (void)prepare:(id /* block */)a0;
- (void)regionByISOCode:(id)a0 result:(id /* block */)a1;
- (void)regionById:(unsigned long long)a0 locale:(id)a1 result:(id /* block */)a2;
- (void)regionById:(unsigned long long)a0 result:(id /* block */)a1;
- (void)regionsNearCoordinate:(struct { double x0; double x1; })a0 radius:(double)a1 types:(unsigned int)a2 sort:(unsigned long long)a3 cursor:(id /* block */)a4 finished:(id /* block */)a5;
- (void)regionsWithName:(id)a0 options:(unsigned int)a1 types:(unsigned int)a2 sort:(unsigned long long)a3 cursor:(id /* block */)a4 finished:(id /* block */)a5;
- (void)regionsWithTimeZoneName:(id)a0 types:(unsigned int)a1 sort:(unsigned long long)a2 cursor:(id /* block */)a3 finished:(id /* block */)a4;

@end

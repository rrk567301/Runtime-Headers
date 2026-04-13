@class NSString, NSDate;

@interface PHMoment : PHAssetCollection

@property (readonly, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned short processedLocation;
@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) NSString *processedLocationTypeString;
@property (readonly, nonatomic) double approximateLatitude;
@property (readonly, nonatomic) double approximateLongitude;
@property (readonly, nonatomic) double gpsHorizontalAccuracy;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) int timeZoneOffset;
@property (readonly, nonatomic) NSDate *representativeDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) float aggregationScore;

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)identifierCode;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)fetchMomentUUIDByAssetUUIDForAssets:(id)a0 options:(id)a1;
+ (id)fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)a0 options:(id)a1;
+ (id)_fetchMomentUUIDByAssetUUIDForAssetUUIDs:(id)a0 photoLibrary:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)localizedTitle;
- (BOOL)hasLocationInfo;
- (id)localizedSubtitle;
- (BOOL)canPerformEditOperation:(long long)a0;
- (BOOL)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (Class)changeRequestClass;
- (id)localizedLocationNames;
- (BOOL)canShowAvalancheStacks;
- (void)_cacheLocationWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

@end

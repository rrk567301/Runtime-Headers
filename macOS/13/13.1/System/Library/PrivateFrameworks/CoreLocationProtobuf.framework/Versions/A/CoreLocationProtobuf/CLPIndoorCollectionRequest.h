@class CLPMeta, NSMutableArray;

@interface CLPIndoorCollectionRequest : PBRequest <NSCopying>

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *indoorWifis;
@property (retain, nonatomic) NSMutableArray *indoorLocations;
@property (retain, nonatomic) NSMutableArray *indoorCMAttitudes;
@property (retain, nonatomic) NSMutableArray *indoorCMPedometers;
@property (retain, nonatomic) NSMutableArray *indoorMotionActivitys;
@property (retain, nonatomic) NSMutableArray *indoorPressures;
@property (retain, nonatomic) NSMutableArray *bundleIds;

+ (Class)indoorWifisType;
+ (Class)indoorLocationsType;
+ (Class)indoorCMAttitudeType;
+ (Class)indoorCMPedometerType;
+ (Class)indoorMotionActivityType;
+ (Class)indoorPressureType;
+ (Class)bundleIdType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)clearIndoorWifis;
- (void)addIndoorWifis:(id)a0;
- (unsigned long long)indoorWifisCount;
- (id)indoorWifisAtIndex:(unsigned long long)a0;
- (void)clearIndoorLocations;
- (void)addIndoorLocations:(id)a0;
- (unsigned long long)indoorLocationsCount;
- (id)indoorLocationsAtIndex:(unsigned long long)a0;
- (void)clearIndoorCMAttitudes;
- (void)addIndoorCMAttitude:(id)a0;
- (unsigned long long)indoorCMAttitudesCount;
- (id)indoorCMAttitudeAtIndex:(unsigned long long)a0;
- (void)clearIndoorCMPedometers;
- (void)addIndoorCMPedometer:(id)a0;
- (unsigned long long)indoorCMPedometersCount;
- (id)indoorCMPedometerAtIndex:(unsigned long long)a0;
- (void)clearIndoorMotionActivitys;
- (void)addIndoorMotionActivity:(id)a0;
- (unsigned long long)indoorMotionActivitysCount;
- (id)indoorMotionActivityAtIndex:(unsigned long long)a0;
- (void)clearIndoorPressures;
- (void)addIndoorPressure:(id)a0;
- (unsigned long long)indoorPressuresCount;
- (id)indoorPressureAtIndex:(unsigned long long)a0;
- (void)clearBundleIds;
- (void)addBundleId:(id)a0;
- (unsigned long long)bundleIdsCount;
- (id)bundleIdAtIndex:(unsigned long long)a0;

@end

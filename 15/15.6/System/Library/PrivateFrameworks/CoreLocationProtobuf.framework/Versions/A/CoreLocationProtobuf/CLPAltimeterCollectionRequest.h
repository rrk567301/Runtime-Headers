@class CLPMeta, CLPContext, CLPLocation, NSMutableArray;

@interface CLPAltimeterCollectionRequest : PBRequest <NSCopying> {
    struct { unsigned char startTimestamp : 1; unsigned char stopTimestamp : 1; unsigned char collectionType : 1; } _has;
}

@property (readonly, nonatomic) char hasMeta;
@property (retain, nonatomic) CLPMeta *meta;
@property (nonatomic) char hasStartTimestamp;
@property (nonatomic) double startTimestamp;
@property (nonatomic) char hasStopTimestamp;
@property (nonatomic) double stopTimestamp;
@property (nonatomic) char hasCollectionType;
@property (nonatomic) int collectionType;
@property (readonly, nonatomic) char hasContext;
@property (retain, nonatomic) CLPContext *context;
@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) CLPLocation *location;
@property (retain, nonatomic) NSMutableArray *pressures;
@property (retain, nonatomic) NSMutableArray *wifiScans;
@property (retain, nonatomic) NSMutableArray *locations;

+ (Class)locationsType;
+ (Class)pressureType;
+ (Class)wifiScanType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLocations:(id)a0;
- (void)clearLocations;
- (unsigned long long)locationsCount;
- (id)locationsAtIndex:(unsigned long long)a0;
- (int)StringAsCollectionType:(id)a0;
- (void)addPressure:(id)a0;
- (void)addWifiScan:(id)a0;
- (void)clearPressures;
- (void)clearWifiScans;
- (id)collectionTypeAsString:(int)a0;
- (id)pressureAtIndex:(unsigned long long)a0;
- (unsigned long long)pressuresCount;
- (id)wifiScanAtIndex:(unsigned long long)a0;
- (unsigned long long)wifiScansCount;

@end

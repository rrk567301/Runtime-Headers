@class PBDataReader, GEOSpeedInfo, GEOTrafficControlDeviceInfo, NSMutableArray, PBUnknownFields;

@interface GEODirectedRoadSegment : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _roadProperties;
    double _beginFraction;
    double _endFraction;
    NSMutableArray *_geometrys;
    long long _roadId;
    GEOSpeedInfo *_speedInfo;
    GEOTrafficControlDeviceInfo *_trafficControlDeviceInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _displayClass;
    int _formOfWay;
    unsigned int _functionalRoadClass;
    unsigned int _laneCount;
    unsigned int _lengthCm;
    unsigned int _traversalTimeS;
    struct { unsigned char has_beginFraction : 1; unsigned char has_endFraction : 1; unsigned char has_roadId : 1; unsigned char has_displayClass : 1; unsigned char has_formOfWay : 1; unsigned char has_functionalRoadClass : 1; unsigned char has_laneCount : 1; unsigned char has_lengthCm : 1; unsigned char has_traversalTimeS : 1; unsigned char read_unknownFields : 1; unsigned char read_roadProperties : 1; unsigned char read_geometrys : 1; unsigned char read_speedInfo : 1; unsigned char read_trafficControlDeviceInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasRoadId;
@property (nonatomic) long long roadId;
@property (retain, nonatomic) NSMutableArray *geometrys;
@property (nonatomic) BOOL hasBeginFraction;
@property (nonatomic) double beginFraction;
@property (nonatomic) BOOL hasEndFraction;
@property (nonatomic) double endFraction;
@property (nonatomic) BOOL hasLengthCm;
@property (nonatomic) unsigned int lengthCm;
@property (nonatomic) BOOL hasTraversalTimeS;
@property (nonatomic) unsigned int traversalTimeS;
@property (nonatomic) BOOL hasFormOfWay;
@property (nonatomic) int formOfWay;
@property (readonly, nonatomic) BOOL hasSpeedInfo;
@property (retain, nonatomic) GEOSpeedInfo *speedInfo;
@property (nonatomic) BOOL hasLaneCount;
@property (nonatomic) unsigned int laneCount;
@property (readonly, nonatomic) BOOL hasTrafficControlDeviceInfo;
@property (retain, nonatomic) GEOTrafficControlDeviceInfo *trafficControlDeviceInfo;
@property (readonly, nonatomic) unsigned long long roadPropertiesCount;
@property (readonly, nonatomic) int *roadProperties;
@property (nonatomic) BOOL hasFunctionalRoadClass;
@property (nonatomic) unsigned int functionalRoadClass;
@property (nonatomic) BOOL hasDisplayClass;
@property (nonatomic) unsigned int displayClass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)geometryType;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsRoadProperties:(id)a0;
- (void)addGeometry:(id)a0;
- (void)addRoadProperties:(int)a0;
- (void)clearGeometrys;
- (void)clearRoadProperties;
- (id)geometryAtIndex:(unsigned long long)a0;
- (unsigned long long)geometrysCount;
- (id)roadPropertiesAsString:(int)a0;
- (int)roadPropertiesAtIndex:(unsigned long long)a0;
- (void)setRoadProperties:(int *)a0 count:(unsigned long long)a1;

@end

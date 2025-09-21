@class NSMutableArray, PBUnknownFields;

@interface GEOTrafficControlDeviceInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_trafficCameraInfos;
    BOOL _hasTrafficLightAtEnd;
    struct { unsigned char has_hasTrafficLightAtEnd : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *trafficCameraInfos;
@property (nonatomic) BOOL hasHasTrafficLightAtEnd;
@property (nonatomic) BOOL hasTrafficLightAtEnd;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)trafficCameraInfoType;

- (id)initWithDictionary:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addTrafficCameraInfo:(id)a0;
- (void)clearTrafficCameraInfos;
- (id)trafficCameraInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)trafficCameraInfosCount;

@end

@class NSMutableArray;

@interface AWDCoreRoutinePersistenceMirroringAccountDevices : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char topDeviceClass : 1; unsigned char totalPlaces : 1; unsigned char totalTransitions : 1; unsigned char totalVisits : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *profiles;
@property (nonatomic) char hasTopDeviceClass;
@property (nonatomic) int topDeviceClass;
@property (nonatomic) char hasTotalVisits;
@property (nonatomic) int totalVisits;
@property (nonatomic) char hasTotalPlaces;
@property (nonatomic) int totalPlaces;
@property (nonatomic) char hasTotalTransitions;
@property (nonatomic) int totalTransitions;

+ (Class)profilesType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addProfiles:(id)a0;
- (void)clearProfiles;
- (id)profilesAtIndex:(unsigned long long)a0;
- (unsigned long long)profilesCount;

@end

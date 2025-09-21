@class NSString, PBUnknownFields;

@interface GEOSharedNavChargingStationInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _chargingTime;
    unsigned long long _muid;
    NSString *_name;
    struct { unsigned char has_chargingTime : 1; unsigned char has_muid : 1; } _flags;
}

@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hasChargingTime;
@property (nonatomic) double chargingTime;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end

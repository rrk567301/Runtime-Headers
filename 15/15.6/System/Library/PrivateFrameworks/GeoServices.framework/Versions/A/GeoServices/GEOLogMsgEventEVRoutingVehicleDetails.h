@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLogMsgEventEVRoutingVehicleDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_make;
    NSString *_model;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _batteryCapacity;
    char _towingNotSupported;
    struct { unsigned char has_batteryCapacity : 1; unsigned char has_towingNotSupported : 1; unsigned char read_unknownFields : 1; unsigned char read_make : 1; unsigned char read_model : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasMake;
@property (retain, nonatomic) NSString *make;
@property (readonly, nonatomic) char hasModel;
@property (retain, nonatomic) NSString *model;
@property (nonatomic) char hasBatteryCapacity;
@property (nonatomic) unsigned int batteryCapacity;
@property (nonatomic) char hasTowingNotSupported;
@property (nonatomic) char towingNotSupported;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
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

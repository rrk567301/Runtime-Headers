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
    BOOL _towingNotSupported;
    struct { unsigned char has_batteryCapacity : 1; unsigned char has_towingNotSupported : 1; unsigned char read_unknownFields : 1; unsigned char read_make : 1; unsigned char read_model : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMake;
@property (retain, nonatomic) NSString *make;
@property (readonly, nonatomic) BOOL hasModel;
@property (retain, nonatomic) NSString *model;
@property (nonatomic) BOOL hasBatteryCapacity;
@property (nonatomic) unsigned int batteryCapacity;
@property (nonatomic) BOOL hasTowingNotSupported;
@property (nonatomic) BOOL towingNotSupported;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
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

@end

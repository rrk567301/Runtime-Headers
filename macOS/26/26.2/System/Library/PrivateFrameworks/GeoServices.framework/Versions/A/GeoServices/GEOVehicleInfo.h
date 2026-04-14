@class PBUnknownFields;

@interface GEOVehicleInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _carPlayConnectionStatus;
    int _intentsConnectionStatus;
    struct { unsigned char has_carPlayConnectionStatus : 1; unsigned char has_intentsConnectionStatus : 1; } _flags;
}

@property (nonatomic) BOOL hasCarPlayConnectionStatus;
@property (nonatomic) int carPlayConnectionStatus;
@property (nonatomic) BOOL hasIntentsConnectionStatus;
@property (nonatomic) int intentsConnectionStatus;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;
- (int)StringAsCarPlayConnectionStatus:(id)a0;
- (int)StringAsIntentsConnectionStatus:(id)a0;
- (id)carPlayConnectionStatusAsString:(int)a0;
- (id)intentsConnectionStatusAsString:(int)a0;

@end

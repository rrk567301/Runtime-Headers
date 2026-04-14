@class PBUnknownFields;

@interface GEOTouristInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _fetchTimestamp;
    BOOL _isTourist;
    struct { unsigned char has_fetchTimestamp : 1; unsigned char has_isTourist : 1; } _flags;
}

@property (nonatomic) BOOL hasIsTourist;
@property (nonatomic) BOOL isTourist;
@property (nonatomic) BOOL hasFetchTimestamp;
@property (nonatomic) double fetchTimestamp;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end

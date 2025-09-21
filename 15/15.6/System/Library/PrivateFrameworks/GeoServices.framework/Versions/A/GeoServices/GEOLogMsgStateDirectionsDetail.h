@class PBUnknownFields;

@interface GEOLogMsgStateDirectionsDetail : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _transportType;
    char _isEv;
    struct { unsigned char has_transportType : 1; unsigned char has_isEv : 1; } _flags;
}

@property (nonatomic) char hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) char hasIsEv;
@property (nonatomic) char isEv;
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
- (int)StringAsTransportType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)transportTypeAsString:(int)a0;

@end

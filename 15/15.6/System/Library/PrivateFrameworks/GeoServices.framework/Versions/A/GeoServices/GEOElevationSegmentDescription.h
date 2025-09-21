@class GEOFormattedString, PBUnknownFields;

@interface GEOElevationSegmentDescription : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_formattedDescription;
    unsigned int _endOffsetM;
    unsigned int _startOffsetM;
    struct { unsigned char has_endOffsetM : 1; unsigned char has_startOffsetM : 1; } _flags;
}

@property (nonatomic) char hasStartOffsetM;
@property (nonatomic) unsigned int startOffsetM;
@property (nonatomic) char hasEndOffsetM;
@property (nonatomic) unsigned int endOffsetM;
@property (readonly, nonatomic) char hasFormattedDescription;
@property (retain, nonatomic) GEOFormattedString *formattedDescription;
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

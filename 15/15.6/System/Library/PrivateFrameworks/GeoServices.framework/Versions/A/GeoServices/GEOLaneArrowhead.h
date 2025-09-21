@class PBUnknownFields;

@interface GEOLaneArrowhead : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _angle;
    int _category;
    struct { unsigned char has_angle : 1; unsigned char has_category : 1; } _flags;
}

@property (nonatomic) char hasAngle;
@property (nonatomic) int angle;
@property (nonatomic) char hasCategory;
@property (nonatomic) int category;
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
- (int)StringAsCategory:(id)a0;
- (id)categoryAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end

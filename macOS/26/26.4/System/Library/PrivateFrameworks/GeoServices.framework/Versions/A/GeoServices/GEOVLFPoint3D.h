@class PBUnknownFields;

@interface GEOVLFPoint3D : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    float _x;
    float _y;
    float _z;
    struct { unsigned char has_x : 1; unsigned char has_y : 1; unsigned char has_z : 1; } _flags;
}

@property (nonatomic) BOOL hasX;
@property (nonatomic) float x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) float y;
@property (nonatomic) BOOL hasZ;
@property (nonatomic) float z;
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

@class GEOPDOrientedPosition;

@interface GEOPDOrientedBoundingBox : PBCodable <NSCopying> {
    double _depth;
    double _height;
    GEOPDOrientedPosition *_position;
    double _width;
    struct { unsigned char has_depth : 1; unsigned char has_height : 1; unsigned char has_width : 1; } _flags;
}

@property (readonly, nonatomic) char hasPosition;
@property (retain, nonatomic) GEOPDOrientedPosition *position;
@property (nonatomic) char hasWidth;
@property (nonatomic) double width;
@property (nonatomic) char hasHeight;
@property (nonatomic) double height;
@property (nonatomic) char hasDepth;
@property (nonatomic) double depth;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end

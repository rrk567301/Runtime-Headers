@interface SIRINLUEXTERNALRRBoundingBox : PBCodable <NSCopying> {
    struct { unsigned char height : 1; unsigned char width : 1; unsigned char xCoordinate : 1; unsigned char yCoordinate : 1; } _has;
}

@property (nonatomic) BOOL hasXCoordinate;
@property (nonatomic) double xCoordinate;
@property (nonatomic) BOOL hasYCoordinate;
@property (nonatomic) double yCoordinate;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) double width;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) double height;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

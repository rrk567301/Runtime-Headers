@class CLPLOGENTRYVISIONSimdDoubleM;

@interface CLPLOGENTRYVISIONVLLocation : PBCodable <NSCopying> {
    struct { unsigned char horizontalAccuracy : 1; } _has;
}

@property (readonly, nonatomic) char hasCoordinate;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleM *coordinate;
@property (nonatomic) char hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

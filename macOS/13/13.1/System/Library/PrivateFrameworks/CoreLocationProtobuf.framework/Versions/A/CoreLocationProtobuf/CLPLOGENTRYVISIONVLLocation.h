@class CLPLOGENTRYVISIONSimdDoubleM;

@interface CLPLOGENTRYVISIONVLLocation : PBCodable <NSCopying> {
    struct { unsigned char horizontalAccuracy : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCoordinate;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleM *coordinate;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end

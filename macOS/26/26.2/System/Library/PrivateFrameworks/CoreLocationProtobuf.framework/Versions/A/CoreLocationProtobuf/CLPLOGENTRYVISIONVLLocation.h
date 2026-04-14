@class CLPLOGENTRYVISIONSimdDoubleM;

@interface CLPLOGENTRYVISIONVLLocation : PBCodable <NSCopying> {
    struct { unsigned char horizontalAccuracy : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCoordinate;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleM *coordinate;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end

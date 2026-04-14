@class CLPLOGENTRYVISIONSimdDoubleM;

@interface CLPLOGENTRYVISIONVLLocation : PBCodable <NSCopying> {
    struct { unsigned char horizontalAccuracy : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCoordinate;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleM *coordinate;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end

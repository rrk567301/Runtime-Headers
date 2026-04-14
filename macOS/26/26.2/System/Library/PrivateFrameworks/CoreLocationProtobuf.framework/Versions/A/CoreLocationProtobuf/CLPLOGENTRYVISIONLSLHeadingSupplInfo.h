@class CLPLOGENTRYVISIONLSLMapRoadSegment;

@interface CLPLOGENTRYVISIONLSLHeadingSupplInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRoadSegment;
@property (retain, nonatomic) CLPLOGENTRYVISIONLSLMapRoadSegment *roadSegment;

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

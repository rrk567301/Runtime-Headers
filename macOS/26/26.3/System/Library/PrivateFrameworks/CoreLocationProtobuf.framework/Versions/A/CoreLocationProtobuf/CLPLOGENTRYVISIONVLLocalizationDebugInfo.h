@class CLPLOGENTRYVISIONVLLocalizationMaps488Details;

@interface CLPLOGENTRYVISIONVLLocalizationDebugInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMaps488Details;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocalizationMaps488Details *maps488Details;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

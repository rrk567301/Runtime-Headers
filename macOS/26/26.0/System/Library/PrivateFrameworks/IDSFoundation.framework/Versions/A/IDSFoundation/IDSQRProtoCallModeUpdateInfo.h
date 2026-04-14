@interface IDSQRProtoCallModeUpdateInfo : PBCodable <NSCopying>

@property (nonatomic) int facetimeMode;
@property (nonatomic) unsigned int modeGenCounter;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)StringAsFacetimeMode:(id)a0;
- (id)facetimeModeAsString:(int)a0;

@end

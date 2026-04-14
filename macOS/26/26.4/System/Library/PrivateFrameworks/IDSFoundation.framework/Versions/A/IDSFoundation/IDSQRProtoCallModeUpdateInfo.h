@interface IDSQRProtoCallModeUpdateInfo : PBCodable <NSCopying>

@property (nonatomic) int facetimeMode;
@property (nonatomic) unsigned int modeGenCounter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsFacetimeMode:(id)a0;
- (id)facetimeModeAsString:(int)a0;

@end

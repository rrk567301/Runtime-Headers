@class OTTag1;

@interface OTAccountSettingsX : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTag1;
@property (retain, nonatomic) OTTag1 *tag1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end

@class NSData;

@interface NTPBTocCardDrag : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasTocExposureId;
@property (retain, nonatomic) NSData *tocExposureId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

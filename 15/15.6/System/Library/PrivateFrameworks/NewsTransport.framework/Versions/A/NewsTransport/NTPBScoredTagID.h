@class NSString;

@interface NTPBScoredTagID : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *tagId;
@property (nonatomic) float score;

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

@class NSMutableArray;

@interface NTPBPublisherFavorabilityScores : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *scores;

+ (Class)scoresType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)addScores:(id)a0;
- (id)scoresAtIndex:(unsigned long long)a0;
- (unsigned long long)scoresCount;
- (id)description;
- (void)clearScores;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

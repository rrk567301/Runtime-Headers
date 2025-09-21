@class NSString, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityTagScore : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTagId;
@property (retain, nonatomic) NSString *tagId;
@property (retain, nonatomic) NSMutableArray *scores;

+ (Class)scoresType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)clearScores;
- (void)mergeFrom:(id)a0;
- (unsigned long long)scoresCount;
- (void)addScores:(id)a0;
- (id)scoresAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

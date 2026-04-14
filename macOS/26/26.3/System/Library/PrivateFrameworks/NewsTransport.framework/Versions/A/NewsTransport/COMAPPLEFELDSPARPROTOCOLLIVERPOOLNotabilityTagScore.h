@class NSString, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityTagScore : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTagId;
@property (retain, nonatomic) NSString *tagId;
@property (retain, nonatomic) NSMutableArray *scores;

+ (Class)scoresType;

- (unsigned long long)scoresCount;
- (id)dictionaryRepresentation;
- (void)clearScores;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)scoresAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addScores:(id)a0;

@end

@class NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityScores : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *tagScores;

+ (Class)tagScoresType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addTagScores:(id)a0;
- (void)clearTagScores;
- (id)tagScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)tagScoresCount;

@end

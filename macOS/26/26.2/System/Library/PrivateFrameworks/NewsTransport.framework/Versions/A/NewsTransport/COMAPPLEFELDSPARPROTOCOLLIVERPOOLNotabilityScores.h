@class NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityScores : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *tagScores;

+ (Class)tagScoresType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addTagScores:(id)a0;
- (void)clearTagScores;
- (id)tagScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)tagScoresCount;

@end

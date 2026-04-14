@class NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLNotabilityScores : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *tagScores;

+ (Class)tagScoresType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addTagScores:(id)a0;
- (void)clearTagScores;
- (id)tagScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)tagScoresCount;

@end

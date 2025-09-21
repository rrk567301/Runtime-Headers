@class NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cohorts;

+ (Class)cohortsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addCohorts:(id)a0;
- (id)cohortsAtIndex:(unsigned long long)a0;
- (void)clearCohorts;
- (unsigned long long)cohortsCount;

@end

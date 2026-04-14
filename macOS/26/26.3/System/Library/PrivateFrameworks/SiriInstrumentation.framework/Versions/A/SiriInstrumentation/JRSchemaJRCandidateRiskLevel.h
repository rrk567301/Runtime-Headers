@class NSArray, NSData;

@interface JRSchemaJRCandidateRiskLevel : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *riskLevels;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteRiskLevel;
- (void)addRiskLevel:(int)a0;
- (void)clearRiskLevel;
- (int)riskLevelAtIndex:(unsigned long long)a0;
- (unsigned long long)riskLevelCount;

@end

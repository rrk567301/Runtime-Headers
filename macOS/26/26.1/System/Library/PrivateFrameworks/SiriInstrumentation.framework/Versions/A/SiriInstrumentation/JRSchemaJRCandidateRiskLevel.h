@class NSArray, NSData;

@interface JRSchemaJRCandidateRiskLevel : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *riskLevels;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteRiskLevel;
- (void)addRiskLevel:(int)a0;
- (void)clearRiskLevel;
- (int)riskLevelAtIndex:(unsigned long long)a0;
- (unsigned long long)riskLevelCount;

@end

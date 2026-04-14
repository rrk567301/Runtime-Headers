@class NSArray, NSData;

@interface JRSchemaJRCandidateRiskLevel : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *riskLevels;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRiskLevel;
- (void)addRiskLevel:(int)a0;
- (void)clearRiskLevel;
- (int)riskLevelAtIndex:(unsigned long long)a0;
- (unsigned long long)riskLevelCount;

@end

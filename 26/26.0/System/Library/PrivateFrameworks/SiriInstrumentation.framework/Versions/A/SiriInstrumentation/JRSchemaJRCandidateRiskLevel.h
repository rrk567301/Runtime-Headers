@class NSArray, NSData;

@interface JRSchemaJRCandidateRiskLevel : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *riskLevels;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteRiskLevel;
- (void)addRiskLevel:(int)a0;
- (void)clearRiskLevel;
- (int)riskLevelAtIndex:(unsigned long long)a0;
- (unsigned long long)riskLevelCount;

@end

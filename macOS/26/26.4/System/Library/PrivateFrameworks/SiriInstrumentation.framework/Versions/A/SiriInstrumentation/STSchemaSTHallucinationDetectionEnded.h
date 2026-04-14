@class NSArray, NSData;

@interface STSchemaSTHallucinationDetectionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char hallucinationDetectionLatencyMs : 1; } _has;
}

@property (nonatomic) int hallucinationDetectionLatencyMs;
@property (nonatomic) BOOL hasHallucinationDetectionLatencyMs;
@property (copy, nonatomic) NSArray *hallucinationDetectedRules;
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
- (void)clearHallucinationDetectedRules;
- (unsigned long long)hallucinationDetectedRulesCount;
- (void)addHallucinationDetectedRules:(int)a0;
- (void)deleteHallucinationDetectedRules;
- (void)deleteHallucinationDetectionLatencyMs;
- (int)hallucinationDetectedRulesAtIndex:(unsigned long long)a0;

@end

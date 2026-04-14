@class NSArray, NSData;

@interface GRRSchemaGRRHypothesisRanked : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *rankings;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addRankings:(id)a0;
- (void)clearRankings;
- (void)deleteRankings;
- (id)rankingsAtIndex:(unsigned long long)a0;
- (unsigned long long)rankingsCount;

@end

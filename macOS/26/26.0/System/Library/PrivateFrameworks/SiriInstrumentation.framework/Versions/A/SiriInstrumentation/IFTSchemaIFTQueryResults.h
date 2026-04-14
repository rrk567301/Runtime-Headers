@class NSArray, NSData;

@interface IFTSchemaIFTQueryResults : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearCandidates;
- (unsigned long long)candidatesCount;
- (void)addCandidates:(id)a0;
- (id)candidatesAtIndex:(unsigned long long)a0;
- (void)deleteCandidates;

@end

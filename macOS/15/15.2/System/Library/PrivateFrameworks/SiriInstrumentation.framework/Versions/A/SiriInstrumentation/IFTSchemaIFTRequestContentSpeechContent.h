@class NSArray, NSData;

@interface IFTSchemaIFTRequestContentSpeechContent : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)candidatesCount;
- (void)clearCandidates;
- (id)initWithJSON:(id)a0;
- (void)addCandidates:(id)a0;
- (id)candidatesAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCandidates;
- (id)suppressMessageUnderConditions;

@end

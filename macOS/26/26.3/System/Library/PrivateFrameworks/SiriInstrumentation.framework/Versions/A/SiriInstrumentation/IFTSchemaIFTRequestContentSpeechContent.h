@class NSArray, NSData;

@interface IFTSchemaIFTRequestContentSpeechContent : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)clearCandidates;
- (unsigned long long)candidatesCount;
- (void)addCandidates:(id)a0;
- (id)candidatesAtIndex:(unsigned long long)a0;
- (void)deleteCandidates;

@end

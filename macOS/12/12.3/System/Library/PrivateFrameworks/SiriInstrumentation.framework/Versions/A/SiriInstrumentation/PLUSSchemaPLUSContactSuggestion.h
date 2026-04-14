@class NSArray, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSContactSuggestion : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; unsigned char confidence : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *suggestionId;
@property (nonatomic) BOOL hasSuggestionId;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasConfidence;
@property (copy, nonatomic) NSArray *contributingGroundTruths;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfidence;
- (void)deleteSource;
- (void)deleteSuggestionId;
- (void)clearContributingGroundTruth;
- (void)addContributingGroundTruth:(id)a0;
- (void)deleteContributingGroundTruth;
- (unsigned long long)contributingGroundTruthCount;
- (id)contributingGroundTruthAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end

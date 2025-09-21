@class NSArray, PLUSSchemaPLUSMediaSuggestionSource, NSData;

@interface PLUSSchemaPLUSMediaSuggestion : SISchemaInstrumentationMessage {
    struct { unsigned char locality : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSMediaSuggestionSource *source;
@property (nonatomic) BOOL hasSource;
@property (copy, nonatomic) NSArray *contributingGroundTruths;
@property (nonatomic) int locality;
@property (nonatomic) BOOL hasLocality;
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
- (id)contributingGroundTruthAtIndex:(unsigned long long)a0;
- (void)addContributingGroundTruth:(id)a0;
- (void)clearContributingGroundTruth;
- (unsigned long long)contributingGroundTruthCount;
- (void)deleteContributingGroundTruth;
- (void)deleteLocality;
- (void)deleteSource;

@end

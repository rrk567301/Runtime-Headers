@class NSData;

@interface NLXSchemaCDMRepetitionResult : SISchemaInstrumentationMessage {
    struct { unsigned char asrHypothesisIndex : 1; unsigned char repetitionType : 1; } _has;
}

@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) char hasAsrHypothesisIndex;
@property (nonatomic) int repetitionType;
@property (nonatomic) char hasRepetitionType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAsrHypothesisIndex;
- (void)deleteRepetitionType;
- (id)suppressMessageUnderConditions;

@end

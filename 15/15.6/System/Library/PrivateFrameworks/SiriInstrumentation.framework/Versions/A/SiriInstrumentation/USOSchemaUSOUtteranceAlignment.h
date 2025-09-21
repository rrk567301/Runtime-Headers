@class NSArray, NSData;

@interface USOSchemaUSOUtteranceAlignment : SISchemaInstrumentationMessage {
    struct { unsigned char asrHypothesisIndex : 1; unsigned char nodeIndex : 1; } _has;
}

@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) char hasAsrHypothesisIndex;
@property (copy, nonatomic) NSArray *spans;
@property (nonatomic) unsigned int nodeIndex;
@property (nonatomic) char hasNodeIndex;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearSpans;
- (id)initWithJSON:(id)a0;
- (unsigned long long)spansCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteNodeIndex;
- (void)addSpans:(id)a0;
- (void)deleteAsrHypothesisIndex;
- (void)deleteSpans;
- (id)spansAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end

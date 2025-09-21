@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSAsrHypothesisIdx : SISchemaInstrumentationMessage {
    struct { unsigned char sourceAuxIdx : 1; unsigned char originalAsrInterpretationIdx : 1; } _has;
}

@property (copy, nonatomic) NSString *sourceAuxKey;
@property (nonatomic) char hasSourceAuxKey;
@property (nonatomic) unsigned int sourceAuxIdx;
@property (nonatomic) char hasSourceAuxIdx;
@property (nonatomic) unsigned int originalAsrInterpretationIdx;
@property (nonatomic) char hasOriginalAsrInterpretationIdx;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteOriginalAsrInterpretationIdx;
- (void)deleteSourceAuxIdx;
- (void)deleteSourceAuxKey;
- (id)suppressMessageUnderConditions;

@end

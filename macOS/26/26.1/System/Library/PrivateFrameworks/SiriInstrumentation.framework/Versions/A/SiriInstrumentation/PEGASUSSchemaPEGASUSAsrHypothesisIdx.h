@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSAsrHypothesisIdx : SISchemaInstrumentationMessage {
    struct { unsigned char sourceAuxIdx : 1; unsigned char originalAsrInterpretationIdx : 1; } _has;
}

@property (copy, nonatomic) NSString *sourceAuxKey;
@property (nonatomic) BOOL hasSourceAuxKey;
@property (nonatomic) unsigned int sourceAuxIdx;
@property (nonatomic) BOOL hasSourceAuxIdx;
@property (nonatomic) unsigned int originalAsrInterpretationIdx;
@property (nonatomic) BOOL hasOriginalAsrInterpretationIdx;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteOriginalAsrInterpretationIdx;
- (void)deleteSourceAuxIdx;
- (void)deleteSourceAuxKey;

@end

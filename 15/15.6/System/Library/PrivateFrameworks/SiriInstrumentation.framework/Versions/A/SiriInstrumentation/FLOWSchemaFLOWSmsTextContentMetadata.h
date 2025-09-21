@class NSData, FLOWSchemaFLOWKeyboardUsageMetadata;

@interface FLOWSchemaFLOWSmsTextContentMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char messageCharLength : 1; unsigned char messageWordLength : 1; unsigned char isPunctuationUsed : 1; unsigned char isPayloadMultilingual : 1; } _has;
}

@property (nonatomic) unsigned int messageCharLength;
@property (nonatomic) char hasMessageCharLength;
@property (nonatomic) unsigned int messageWordLength;
@property (nonatomic) char hasMessageWordLength;
@property (retain, nonatomic) FLOWSchemaFLOWKeyboardUsageMetadata *flowKeyboardUsageMetadata;
@property (nonatomic) char hasFlowKeyboardUsageMetadata;
@property (nonatomic) char isPunctuationUsed;
@property (nonatomic) char hasIsPunctuationUsed;
@property (nonatomic) char isPayloadMultilingual;
@property (nonatomic) char hasIsPayloadMultilingual;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteFlowKeyboardUsageMetadata;
- (void)deleteIsPayloadMultilingual;
- (void)deleteIsPunctuationUsed;
- (void)deleteMessageCharLength;
- (void)deleteMessageWordLength;
- (id)suppressMessageUnderConditions;

@end

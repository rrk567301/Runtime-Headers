@class NSData, FLOWSchemaFLOWKeyboardUsageMetadata;

@interface FLOWSchemaFLOWSmsTextContentMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char messageCharLength : 1; unsigned char messageWordLength : 1; unsigned char isPunctuationUsed : 1; unsigned char isPayloadMultilingual : 1; } _has;
}

@property (nonatomic) unsigned int messageCharLength;
@property (nonatomic) BOOL hasMessageCharLength;
@property (nonatomic) unsigned int messageWordLength;
@property (nonatomic) BOOL hasMessageWordLength;
@property (retain, nonatomic) FLOWSchemaFLOWKeyboardUsageMetadata *flowKeyboardUsageMetadata;
@property (nonatomic) BOOL hasFlowKeyboardUsageMetadata;
@property (nonatomic) BOOL isPunctuationUsed;
@property (nonatomic) BOOL hasIsPunctuationUsed;
@property (nonatomic) BOOL isPayloadMultilingual;
@property (nonatomic) BOOL hasIsPayloadMultilingual;
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
- (void)deleteFlowKeyboardUsageMetadata;
- (void)deleteIsPayloadMultilingual;
- (void)deleteIsPunctuationUsed;
- (void)deleteMessageCharLength;
- (void)deleteMessageWordLength;

@end

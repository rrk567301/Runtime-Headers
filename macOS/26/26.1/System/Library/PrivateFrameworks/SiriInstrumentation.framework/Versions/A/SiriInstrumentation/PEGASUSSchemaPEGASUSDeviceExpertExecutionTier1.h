@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSDeviceExpertExecutionTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char isLlmGeneratedAnswer : 1; } _has;
}

@property (copy, nonatomic) NSString *qnaId;
@property (nonatomic) BOOL hasQnaId;
@property (nonatomic) BOOL isLlmGeneratedAnswer;
@property (nonatomic) BOOL hasIsLlmGeneratedAnswer;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteIsLlmGeneratedAnswer;
- (void)deleteQnaId;

@end

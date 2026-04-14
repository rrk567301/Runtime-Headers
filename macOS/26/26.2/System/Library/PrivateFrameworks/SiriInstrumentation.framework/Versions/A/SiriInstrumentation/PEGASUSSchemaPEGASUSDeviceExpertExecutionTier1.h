@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSDeviceExpertExecutionTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char isLlmGeneratedAnswer : 1; } _has;
}

@property (copy, nonatomic) NSString *qnaId;
@property (nonatomic) BOOL hasQnaId;
@property (nonatomic) BOOL isLlmGeneratedAnswer;
@property (nonatomic) BOOL hasIsLlmGeneratedAnswer;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteIsLlmGeneratedAnswer;
- (void)deleteQnaId;

@end

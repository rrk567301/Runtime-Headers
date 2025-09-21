@class NSData, SISchemaUUID;

@interface STSchemaSTLLMQUQueryArgumentsTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char eventType : 1; unsigned char llmquAppEntityType : 1; unsigned char llmquAppEntityStatus : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (nonatomic) int eventType;
@property (nonatomic) char hasEventType;
@property (nonatomic) int llmquAppEntityType;
@property (nonatomic) char hasLlmquAppEntityType;
@property (nonatomic) int llmquAppEntityStatus;
@property (nonatomic) char hasLlmquAppEntityStatus;
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
- (void)deleteEventType;
- (void)deleteLinkId;
- (void)deleteLlmquAppEntityStatus;
- (void)deleteLlmquAppEntityType;
- (id)suppressMessageUnderConditions;

@end

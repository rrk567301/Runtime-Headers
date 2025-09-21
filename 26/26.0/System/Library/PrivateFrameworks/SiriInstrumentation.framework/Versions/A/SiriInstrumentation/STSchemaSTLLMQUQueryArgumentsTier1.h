@class NSData, SISchemaUUID;

@interface STSchemaSTLLMQUQueryArgumentsTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char eventType : 1; unsigned char llmquAppEntityType : 1; unsigned char llmquAppEntityStatus : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int llmquAppEntityType;
@property (nonatomic) BOOL hasLlmquAppEntityType;
@property (nonatomic) int llmquAppEntityStatus;
@property (nonatomic) BOOL hasLlmquAppEntityStatus;
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
- (void)deleteEventType;
- (void)deleteLinkId;
- (void)deleteLlmquAppEntityStatus;
- (void)deleteLlmquAppEntityType;

@end

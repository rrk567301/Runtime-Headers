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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEventType;
- (void)deleteLinkId;
- (void)deleteLlmquAppEntityStatus;
- (void)deleteLlmquAppEntityType;

@end

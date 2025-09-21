@class NSData, SISchemaUUID;

@interface POMMESSchemaPOMMESKnowledgeFallbackOffered : SISchemaInstrumentationMessage {
    struct { unsigned char isKnowledgeFallbackConfirmationShown : 1; unsigned char offeredAgent : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *pommesSessionId;
@property (nonatomic) char hasPommesSessionId;
@property (nonatomic) char isKnowledgeFallbackConfirmationShown;
@property (nonatomic) char hasIsKnowledgeFallbackConfirmationShown;
@property (nonatomic) int offeredAgent;
@property (nonatomic) char hasOfferedAgent;
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
- (void)deleteIsKnowledgeFallbackConfirmationShown;
- (void)deleteOfferedAgent;
- (void)deletePommesSessionId;
- (id)suppressMessageUnderConditions;

@end

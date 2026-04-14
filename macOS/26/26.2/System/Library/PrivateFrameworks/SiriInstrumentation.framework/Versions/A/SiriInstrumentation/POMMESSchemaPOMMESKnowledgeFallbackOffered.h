@class NSData, SISchemaUUID;

@interface POMMESSchemaPOMMESKnowledgeFallbackOffered : SISchemaInstrumentationMessage {
    struct { unsigned char isKnowledgeFallbackConfirmationShown : 1; unsigned char offeredAgent : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *pommesSessionId;
@property (nonatomic) BOOL hasPommesSessionId;
@property (nonatomic) BOOL isKnowledgeFallbackConfirmationShown;
@property (nonatomic) BOOL hasIsKnowledgeFallbackConfirmationShown;
@property (nonatomic) int offeredAgent;
@property (nonatomic) BOOL hasOfferedAgent;
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
- (void)deleteIsKnowledgeFallbackConfirmationShown;
- (void)deleteOfferedAgent;
- (void)deletePommesSessionId;

@end

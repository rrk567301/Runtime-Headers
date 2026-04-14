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
- (void)deleteIsKnowledgeFallbackConfirmationShown;
- (void)deleteOfferedAgent;
- (void)deletePommesSessionId;

@end

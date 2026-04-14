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
- (void)deleteIsKnowledgeFallbackConfirmationShown;
- (void)deleteOfferedAgent;
- (void)deletePommesSessionId;

@end

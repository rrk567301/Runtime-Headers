@class NSData, SISchemaUUID;

@interface PSESchemaPSEClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char siriEngagementTaskSuccess : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *uiSessionId;
@property (nonatomic) BOOL hasUiSessionId;
@property (retain, nonatomic) SISchemaUUID *originalLastRequestId;
@property (nonatomic) BOOL hasOriginalLastRequestId;
@property (nonatomic) int siriEngagementTaskSuccess;
@property (nonatomic) BOOL hasSiriEngagementTaskSuccess;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteUiSessionId;
- (void)deleteOriginalLastRequestId;
- (void)deleteSiriEngagementTaskSuccess;

@end

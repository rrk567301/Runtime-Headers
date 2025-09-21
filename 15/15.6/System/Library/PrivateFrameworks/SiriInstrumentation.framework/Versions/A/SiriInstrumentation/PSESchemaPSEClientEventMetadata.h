@class NSData, SISchemaUUID;

@interface PSESchemaPSEClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char siriEngagementTaskSuccess : 1; unsigned char triggerOrigin : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *uiSessionId;
@property (nonatomic) char hasUiSessionId;
@property (retain, nonatomic) SISchemaUUID *originalLastRequestId;
@property (nonatomic) char hasOriginalLastRequestId;
@property (nonatomic) int siriEngagementTaskSuccess;
@property (nonatomic) char hasSiriEngagementTaskSuccess;
@property (retain, nonatomic) SISchemaUUID *taskId;
@property (nonatomic) char hasTaskId;
@property (retain, nonatomic) SISchemaUUID *pseId;
@property (nonatomic) char hasPseId;
@property (nonatomic) int triggerOrigin;
@property (nonatomic) char hasTriggerOrigin;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSiriEngagementTaskSuccess;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteOriginalLastRequestId;
- (void)deletePseId;
- (void)deleteTaskId;
- (void)deleteTriggerOrigin;
- (void)deleteUiSessionId;
- (id)suppressMessageUnderConditions;

@end

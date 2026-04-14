@class NSData, SISchemaUUID;

@interface PSESchemaPSEClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char siriEngagementTaskSuccess : 1; unsigned char triggerOrigin : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *uiSessionId;
@property (nonatomic) BOOL hasUiSessionId;
@property (retain, nonatomic) SISchemaUUID *originalLastRequestId;
@property (nonatomic) BOOL hasOriginalLastRequestId;
@property (nonatomic) int siriEngagementTaskSuccess;
@property (nonatomic) BOOL hasSiriEngagementTaskSuccess;
@property (retain, nonatomic) SISchemaUUID *taskId;
@property (nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) SISchemaUUID *pseId;
@property (nonatomic) BOOL hasPseId;
@property (nonatomic) int triggerOrigin;
@property (nonatomic) BOOL hasTriggerOrigin;
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
- (void)deleteSiriEngagementTaskSuccess;
- (void)deleteOriginalLastRequestId;
- (void)deletePseId;
- (void)deleteTaskId;
- (void)deleteTriggerOrigin;
- (void)deleteUiSessionId;

@end

@class SISchemaInstrumentationMessage, ANCSchemaANCUserResponseEvaluated, NSData, ANCSchemaANCNotificationReceivedTier1, ANCSchemaANCClientEventMetadata, ANCSchemaANCNotificationReceived;

@interface ANCSchemaANCClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ANCSchemaANCClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ANCSchemaANCNotificationReceived *notificationReceived;
@property (nonatomic) BOOL hasNotificationReceived;
@property (retain, nonatomic) ANCSchemaANCUserResponseEvaluated *userResponseEvaluated;
@property (nonatomic) BOOL hasUserResponseEvaluated;
@property (retain, nonatomic) ANCSchemaANCNotificationReceivedTier1 *notificationReceivedTier1;
@property (nonatomic) BOOL hasNotificationReceivedTier1;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (id)getComponentId;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEventMetadata;
- (void)deleteNotificationReceived;
- (void)deleteUserResponseEvaluated;
- (void)deleteNotificationReceivedTier1;

@end

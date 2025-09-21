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

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (int)componentName;
- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteNotificationReceivedTier1;
- (void)deleteEventMetadata;
- (void)deleteNotificationReceived;
- (void)deleteUserResponseEvaluated;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end

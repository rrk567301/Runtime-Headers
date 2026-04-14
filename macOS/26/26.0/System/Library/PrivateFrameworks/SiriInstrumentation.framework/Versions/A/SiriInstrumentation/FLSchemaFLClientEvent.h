@class SISchemaInstrumentationMessage, FLSchemaFLActionEvaluationContext, FLSchemaFLClientEventMetadata, NSData, FLSchemaFLInteractionDonationContext;

@interface FLSchemaFLClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) FLSchemaFLClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) FLSchemaFLActionEvaluationContext *evaluationContext;
@property (nonatomic) BOOL hasEvaluationContext;
@property (retain, nonatomic) FLSchemaFLInteractionDonationContext *donationContext;
@property (nonatomic) BOOL hasDonationContext;
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
- (void)deleteDonationContext;
- (void)deleteEvaluationContext;
- (void)deleteEventMetadata;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end

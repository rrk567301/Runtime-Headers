@class SISchemaInstrumentationMessage, ASVSchemaASVClientEventMetadata, NSData, ASVSchemaASVUserIntentDetected, ASVSchemaASVOutputVolumeQueried;

@interface ASVSchemaASVClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ASVSchemaASVClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ASVSchemaASVOutputVolumeQueried *asvOutputVolumeQueried;
@property (nonatomic) BOOL hasAsvOutputVolumeQueried;
@property (retain, nonatomic) ASVSchemaASVUserIntentDetected *asvUserIntentDetected;
@property (nonatomic) BOOL hasAsvUserIntentDetected;
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
- (void)deleteAsvOutputVolumeQueried;
- (void)deleteAsvUserIntentDetected;
- (void)deleteEventMetadata;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end

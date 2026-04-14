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
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAsvOutputVolumeQueried;
- (void)deleteAsvUserIntentDetected;
- (void)deleteEventMetadata;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end

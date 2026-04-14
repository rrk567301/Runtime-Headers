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

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)componentName;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAsvOutputVolumeQueried;
- (void)deleteAsvUserIntentDetected;
- (void)deleteEventMetadata;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end

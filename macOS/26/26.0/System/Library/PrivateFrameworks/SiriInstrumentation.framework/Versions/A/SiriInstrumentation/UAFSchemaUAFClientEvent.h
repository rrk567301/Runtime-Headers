@class SISchemaInstrumentationMessage, UAFSchemaUAFAssetDailyStatusWithDeviceProperties, NSData, UAFSchemaUAFClientEventMetadata;

@interface UAFSchemaUAFClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) UAFSchemaUAFClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) UAFSchemaUAFAssetDailyStatusWithDeviceProperties *uafAssetDailyStatus;
@property (nonatomic) BOOL hasUafAssetDailyStatus;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

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
- (void)deleteEventMetadata;
- (void)deleteUafAssetDailyStatus;
- (unsigned long long)whichInnerEventType;

@end

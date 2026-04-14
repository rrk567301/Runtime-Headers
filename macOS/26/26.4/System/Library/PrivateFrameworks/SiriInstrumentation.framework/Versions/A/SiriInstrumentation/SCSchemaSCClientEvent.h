@class SCSchemaSCClientEventMetadata, SCSchemaSCUndoChecked, SISchemaInstrumentationMessage, SCSchemaSCCorrectionChecked, NSData, SCSchemaSCUndoSet;

@interface SCSchemaSCClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SCSchemaSCClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SCSchemaSCUndoChecked *undoChecked;
@property (nonatomic) BOOL hasUndoChecked;
@property (retain, nonatomic) SCSchemaSCCorrectionChecked *correctionChecked;
@property (nonatomic) BOOL hasCorrectionChecked;
@property (retain, nonatomic) SCSchemaSCUndoSet *undoSet;
@property (nonatomic) BOOL hasUndoSet;
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
- (void)deleteCorrectionChecked;
- (void)deleteEventMetadata;
- (void)deleteUndoChecked;
- (void)deleteUndoSet;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end

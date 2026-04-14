@class NSData, SISchemaInstrumentationMessage, CLPInstSchemaCLPCurareAppIntentSampleClassificationContext, CLPInstSchemaCLPClientEventMetadata, CLPInstSchemaCLPCDMReplaySampleContext, CLPInstSchemaCLPCDMReplayTaskContext, CLPInstSchemaCLPNLv4TaskEvaluationContext, CLPInstSchemaCLPNLv4SampleEvaluationContext, CLPInstSchemaCLPCurareAppIntentTaskClassificationContext;

@interface CLPInstSchemaCLPClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) CLPInstSchemaCLPClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) CLPInstSchemaCLPNLv4SampleEvaluationContext *nlv4SampleEvaluationContext;
@property (nonatomic) BOOL hasNlv4SampleEvaluationContext;
@property (retain, nonatomic) CLPInstSchemaCLPNLv4TaskEvaluationContext *nlv4TaskEvaluationContext;
@property (nonatomic) BOOL hasNlv4TaskEvaluationContext;
@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentSampleClassificationContext *curareAppIntentSampleClassificationContext;
@property (nonatomic) BOOL hasCurareAppIntentSampleClassificationContext;
@property (retain, nonatomic) CLPInstSchemaCLPCurareAppIntentTaskClassificationContext *curareAppIntentTaskClassificationContext;
@property (nonatomic) BOOL hasCurareAppIntentTaskClassificationContext;
@property (retain, nonatomic) CLPInstSchemaCLPCDMReplaySampleContext *cdmReplaySampleContext;
@property (nonatomic) BOOL hasCdmReplaySampleContext;
@property (retain, nonatomic) CLPInstSchemaCLPCDMReplayTaskContext *cdmReplayTaskContext;
@property (nonatomic) BOOL hasCdmReplayTaskContext;
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
- (void)deleteNlv4TaskEvaluationContext;
- (void)deleteCdmReplaySampleContext;
- (void)deleteCdmReplayTaskContext;
- (void)deleteCurareAppIntentSampleClassificationContext;
- (void)deleteCurareAppIntentTaskClassificationContext;
- (void)deleteEventMetadata;
- (void)deleteNlv4SampleEvaluationContext;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end

@class POMMESSchemaPOMMESClientEventMetadata, POMMESSchemaPOMMESOnDeviceIndexSearchContext, SISchemaInstrumentationMessage, POMMESSchemaPOMMESPegasusRequestContext, POMMESSchemaPOMMESProfileSliceResolutionRequestContext, POMMESSchemaPOMMESPegasusKitPegasusRequestContext, NSData, POMMESSchemaPOMMESServiceClassifierScoreReported, POMMESSchemaPOMMESDebugPerformanceReported, POMMESSchemaPOMMESRequestContext;

@interface POMMESSchemaPOMMESClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) POMMESSchemaPOMMESClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestContext *pegasusRequestContext;
@property (nonatomic) BOOL hasPegasusRequestContext;
@property (retain, nonatomic) POMMESSchemaPOMMESOnDeviceIndexSearchContext *onDeviceIndexSearchContext;
@property (nonatomic) BOOL hasOnDeviceIndexSearchContext;
@property (retain, nonatomic) POMMESSchemaPOMMESServiceClassifierScoreReported *pommesServiceClassifierScoreReported;
@property (nonatomic) BOOL hasPommesServiceClassifierScoreReported;
@property (retain, nonatomic) POMMESSchemaPOMMESRequestContext *pommesRequestContext;
@property (nonatomic) BOOL hasPommesRequestContext;
@property (retain, nonatomic) POMMESSchemaPOMMESDebugPerformanceReported *performanceReported;
@property (nonatomic) BOOL hasPerformanceReported;
@property (retain, nonatomic) POMMESSchemaPOMMESProfileSliceResolutionRequestContext *profileResolutionRequestContext;
@property (nonatomic) BOOL hasProfileResolutionRequestContext;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusKitPegasusRequestContext *pegasusKitRequestContext;
@property (nonatomic) BOOL hasPegasusKitRequestContext;
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
- (void)deletePegasusRequestContext;
- (void)deleteOnDeviceIndexSearchContext;
- (void)deletePommesServiceClassifierScoreReported;
- (void)deletePommesRequestContext;
- (void)deletePerformanceReported;
- (void)deleteProfileResolutionRequestContext;
- (void)deletePegasusKitRequestContext;

@end

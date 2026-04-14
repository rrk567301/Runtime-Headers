@class POMMESSchemaPOMMESRequestContext, POMMESSchemaPOMMESDebugPerformanceReported, POMMESSchemaPOMMESServiceClassifierScoreReported, NSData, POMMESSchemaPOMMESClientEventMetadata, POMMESSchemaPOMMESOnDeviceIndexSearchContext, POMMESSchemaPOMMESPegasusRequestContext;

@interface POMMESSchemaPOMMESClientEvent : SISchemaTopLevelUnionType

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
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (void)deleteEventMetadata;
- (void)deletePegasusRequestContext;
- (void)deleteOnDeviceIndexSearchContext;
- (void)deletePommesServiceClassifierScoreReported;
- (void)deletePommesRequestContext;
- (void)deletePerformanceReported;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end

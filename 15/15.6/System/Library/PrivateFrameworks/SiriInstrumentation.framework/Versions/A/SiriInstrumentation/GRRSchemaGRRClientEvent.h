@class SISchemaInstrumentationMessage, GRRSchemaGRRClientEventMetadata, GRRSchemaGRRFeatureExtractionContext, NSData, GRRSchemaGRRSystemErrorOccurred, GRRSchemaGRRHypothesisRankingContext;

@interface GRRSchemaGRRClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) GRRSchemaGRRClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) GRRSchemaGRRFeatureExtractionContext *featureExtractionContext;
@property (nonatomic) char hasFeatureExtractionContext;
@property (retain, nonatomic) GRRSchemaGRRHypothesisRankingContext *hypothesisRankingContext;
@property (nonatomic) char hasHypothesisRankingContext;
@property (retain, nonatomic) GRRSchemaGRRSystemErrorOccurred *systemErrorOccurred;
@property (nonatomic) char hasSystemErrorOccurred;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteEventMetadata;
- (void)deleteFeatureExtractionContext;
- (void)deleteHypothesisRankingContext;
- (void)deleteSystemErrorOccurred;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end

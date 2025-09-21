@class NSData, PSESchemaPSECommonSignal, PSESchemaPSEAppIntentInteractionEngagement;

@interface PSESchemaPSEAppIntentSignalGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) PSESchemaPSECommonSignal *commonSignal;
@property (nonatomic) char hasCommonSignal;
@property (retain, nonatomic) PSESchemaPSEAppIntentInteractionEngagement *engagementSignal;
@property (nonatomic) char hasEngagementSignal;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCommonSignal;
- (void)deleteEngagementSignal;
- (id)suppressMessageUnderConditions;

@end

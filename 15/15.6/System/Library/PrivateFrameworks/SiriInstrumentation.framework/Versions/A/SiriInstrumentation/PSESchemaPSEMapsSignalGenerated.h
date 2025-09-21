@class NSData, PSESchemaPSECommonSignal, PSESchemaPSEMaps;

@interface PSESchemaPSEMapsSignalGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) PSESchemaPSECommonSignal *commonSignal;
@property (nonatomic) char hasCommonSignal;
@property (retain, nonatomic) PSESchemaPSEMaps *mapsSignal;
@property (nonatomic) char hasMapsSignal;
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
- (void)deleteMapsSignal;
- (id)suppressMessageUnderConditions;

@end

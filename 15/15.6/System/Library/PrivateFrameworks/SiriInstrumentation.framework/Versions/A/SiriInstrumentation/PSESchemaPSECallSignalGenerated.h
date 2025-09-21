@class NSData, PSESchemaPSECommonSignal, PSESchemaPSECall;

@interface PSESchemaPSECallSignalGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) PSESchemaPSECommonSignal *commonSignal;
@property (nonatomic) char hasCommonSignal;
@property (retain, nonatomic) PSESchemaPSECall *callSignal;
@property (nonatomic) char hasCallSignal;
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
- (void)deleteCallSignal;
- (void)deleteCommonSignal;
- (id)suppressMessageUnderConditions;

@end

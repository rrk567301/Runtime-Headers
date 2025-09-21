@class ODDSiriSchemaODDAssistantProperties, ODDSiriSchemaODDDictationProperties, ODDSiriSchemaODDGeneralProperties, NSData;

@interface ODDSiriSchemaODDvisionOSDevicePropertiesReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDGeneralProperties *general;
@property (nonatomic) char hasGeneral;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantProperties *assistant;
@property (nonatomic) char hasAssistant;
@property (retain, nonatomic) ODDSiriSchemaODDDictationProperties *dictation;
@property (nonatomic) char hasDictation;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssistant;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDictation;
- (void)deleteGeneral;
- (id)suppressMessageUnderConditions;

@end

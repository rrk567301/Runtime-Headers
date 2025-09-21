@class ODDSiriSchemaODDAssistantProperties, ODDSiriSchemaODDDictationProperties, ODDSiriSchemaODDGeneralProperties, ODDSiriSchemaODDtvOSAssistantProperties, NSData;

@interface ODDSiriSchemaODDtvOSDevicePropertiesReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDGeneralProperties *general;
@property (nonatomic) char hasGeneral;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantProperties *assistant;
@property (nonatomic) char hasAssistant;
@property (retain, nonatomic) ODDSiriSchemaODDDictationProperties *dictation;
@property (nonatomic) char hasDictation;
@property (retain, nonatomic) ODDSiriSchemaODDtvOSAssistantProperties *tvOSAssistant;
@property (nonatomic) char hasTvOSAssistant;
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
- (void)deleteTvOSAssistant;
- (id)suppressMessageUnderConditions;

@end

@class NSData, ODDSiriSchemaODDAssistantProperties, ODDSiriSchemaODDDictationProperties, ODDSiriSchemaODDGeneralProperties, ODDSiriSchemaODDiOSAssistantProperties, ODDSiriSchemaODDiOSGeneralProperties;

@interface ODDSiriSchemaODDiOSDevicePropertiesReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDGeneralProperties *general;
@property (nonatomic) char hasGeneral;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantProperties *assistant;
@property (nonatomic) char hasAssistant;
@property (retain, nonatomic) ODDSiriSchemaODDDictationProperties *dictation;
@property (nonatomic) char hasDictation;
@property (retain, nonatomic) ODDSiriSchemaODDiOSAssistantProperties *iOSAssistant;
@property (nonatomic) char hasIOSAssistant;
@property (retain, nonatomic) ODDSiriSchemaODDiOSGeneralProperties *iOSGeneral;
@property (nonatomic) char hasIOSGeneral;
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
- (void)deleteIOSAssistant;
- (void)deleteIOSGeneral;
- (id)suppressMessageUnderConditions;

@end

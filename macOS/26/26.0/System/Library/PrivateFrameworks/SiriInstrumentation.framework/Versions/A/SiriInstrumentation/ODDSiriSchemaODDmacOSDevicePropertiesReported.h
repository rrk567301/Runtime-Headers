@class ODDSiriSchemaODDAssistantProperties, ODDSiriSchemaODDDictationProperties, ODDSiriSchemaODDGeneralProperties, NSData, ODDSiriSchemaODDmacOSAssistantProperties;

@interface ODDSiriSchemaODDmacOSDevicePropertiesReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDGeneralProperties *general;
@property (nonatomic) BOOL hasGeneral;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantProperties *assistant;
@property (nonatomic) BOOL hasAssistant;
@property (retain, nonatomic) ODDSiriSchemaODDDictationProperties *dictation;
@property (nonatomic) BOOL hasDictation;
@property (retain, nonatomic) ODDSiriSchemaODDmacOSAssistantProperties *macOSAssistant;
@property (nonatomic) BOOL hasMacOSAssistant;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteDictation;
- (void)deleteAssistant;
- (void)deleteGeneral;
- (void)deleteMacOSAssistant;

@end

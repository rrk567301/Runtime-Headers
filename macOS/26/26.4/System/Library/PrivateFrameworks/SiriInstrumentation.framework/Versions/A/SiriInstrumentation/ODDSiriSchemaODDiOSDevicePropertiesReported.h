@class NSData, ODDSiriSchemaODDAssistantProperties, ODDSiriSchemaODDDictationProperties, ODDSiriSchemaODDGeneralProperties, ODDSiriSchemaODDiOSAssistantProperties, ODDSiriSchemaODDiOSGeneralProperties;

@interface ODDSiriSchemaODDiOSDevicePropertiesReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDGeneralProperties *general;
@property (nonatomic) BOOL hasGeneral;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantProperties *assistant;
@property (nonatomic) BOOL hasAssistant;
@property (retain, nonatomic) ODDSiriSchemaODDDictationProperties *dictation;
@property (nonatomic) BOOL hasDictation;
@property (retain, nonatomic) ODDSiriSchemaODDiOSAssistantProperties *iOSAssistant;
@property (nonatomic) BOOL hasIOSAssistant;
@property (retain, nonatomic) ODDSiriSchemaODDiOSGeneralProperties *iOSGeneral;
@property (nonatomic) BOOL hasIOSGeneral;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDictation;
- (void)deleteAssistant;
- (void)deleteGeneral;
- (void)deleteIOSAssistant;
- (void)deleteIOSGeneral;

@end

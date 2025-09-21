@class INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals, INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals, NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentSignals : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals *contactDependentMessageSignals;
@property (nonatomic) char hasContactDependentMessageSignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals *contactDependentPhoneCallSignals;
@property (nonatomic) char hasContactDependentPhoneCallSignals;
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
- (void)deleteContactDependentMessageSignals;
- (void)deleteContactDependentPhoneCallSignals;
- (id)suppressMessageUnderConditions;

@end

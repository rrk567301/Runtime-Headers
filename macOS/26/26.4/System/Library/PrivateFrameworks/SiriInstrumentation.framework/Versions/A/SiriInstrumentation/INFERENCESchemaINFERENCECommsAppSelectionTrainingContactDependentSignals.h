@class INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals, INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals, NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentSignals : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals *contactDependentMessageSignals;
@property (nonatomic) BOOL hasContactDependentMessageSignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals *contactDependentPhoneCallSignals;
@property (nonatomic) BOOL hasContactDependentPhoneCallSignals;
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
- (void)deleteContactDependentMessageSignals;
- (void)deleteContactDependentPhoneCallSignals;

@end

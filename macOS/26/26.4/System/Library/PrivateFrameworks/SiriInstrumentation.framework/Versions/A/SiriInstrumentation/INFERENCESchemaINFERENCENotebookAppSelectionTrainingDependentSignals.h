@class NSData, INFERENCESchemaINFERENCECommonAppDependentSignals;

@interface INFERENCESchemaINFERENCENotebookAppSelectionTrainingDependentSignals : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppDependentSignals *commonDependent;
@property (nonatomic) BOOL hasCommonDependent;
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
- (void)deleteCommonDependent;

@end

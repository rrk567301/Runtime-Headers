@class NSData, INFERENCESchemaINFERENCECommonAppIndependentSignals;

@interface INFERENCESchemaINFERENCENotebookAppSelectionTrainingIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char isNotebookTitlePresent : 1; unsigned char isNotebookPayloadPresent : 1; unsigned char isNotebookGroupPresent : 1; } _has;
}

@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppIndependentSignals *commonIndependent;
@property (nonatomic) char hasCommonIndependent;
@property (nonatomic) char isNotebookTitlePresent;
@property (nonatomic) char hasIsNotebookTitlePresent;
@property (nonatomic) char isNotebookPayloadPresent;
@property (nonatomic) char hasIsNotebookPayloadPresent;
@property (nonatomic) char isNotebookGroupPresent;
@property (nonatomic) char hasIsNotebookGroupPresent;
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
- (void)deleteCommonIndependent;
- (void)deleteIsNotebookGroupPresent;
- (void)deleteIsNotebookPayloadPresent;
- (void)deleteIsNotebookTitlePresent;
- (id)suppressMessageUnderConditions;

@end

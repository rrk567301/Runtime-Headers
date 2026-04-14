@class NSData, JRSchemaJRModelDiagnosticsSignals, JRSchemaRanking, JRSchemaJRActionCandidateTuple, JRSchemaJRAction, JRSchemaJRAnonymizedHistoryAndContext;

@interface JRSchemaJRModelOutputs : SISchemaInstrumentationMessage {
    struct { unsigned char didJRForcePrompt : 1; } _has;
}

@property (retain, nonatomic) JRSchemaJRAction *action;
@property (nonatomic) BOOL hasAction;
@property (retain, nonatomic) JRSchemaJRActionCandidateTuple *candidates;
@property (nonatomic) BOOL hasCandidates;
@property (retain, nonatomic) JRSchemaRanking *ranking;
@property (nonatomic) BOOL hasRanking;
@property (retain, nonatomic) JRSchemaJRAnonymizedHistoryAndContext *jrAnonymizedHistoryAndContext;
@property (nonatomic) BOOL hasJrAnonymizedHistoryAndContext;
@property (nonatomic) BOOL didJRForcePrompt;
@property (nonatomic) BOOL hasDidJRForcePrompt;
@property (retain, nonatomic) JRSchemaJRModelDiagnosticsSignals *modelDiagnosticSignals;
@property (nonatomic) BOOL hasModelDiagnosticSignals;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAction;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCandidates;
- (void)deleteDidJRForcePrompt;
- (void)deleteJrAnonymizedHistoryAndContext;
- (void)deleteModelDiagnosticSignals;
- (void)deleteRanking;
- (id)suppressMessageUnderConditions;

@end

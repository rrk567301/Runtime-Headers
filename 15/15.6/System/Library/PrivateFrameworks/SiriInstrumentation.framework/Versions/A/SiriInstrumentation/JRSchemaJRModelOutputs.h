@class NSData, JRSchemaJRModelDiagnosticsSignals, NSArray, JRSchemaRanking, JRSchemaJRActionCandidateTuple, JRSchemaJRAction, JRSchemaJRAnonymizedHistoryAndContext;

@interface JRSchemaJRModelOutputs : SISchemaInstrumentationMessage {
    struct { unsigned char didJRForcePrompt : 1; } _has;
}

@property (retain, nonatomic) JRSchemaJRAction *action;
@property (nonatomic) char hasAction;
@property (retain, nonatomic) JRSchemaJRActionCandidateTuple *candidates;
@property (nonatomic) char hasCandidates;
@property (retain, nonatomic) JRSchemaRanking *ranking;
@property (nonatomic) char hasRanking;
@property (retain, nonatomic) JRSchemaJRAnonymizedHistoryAndContext *jrAnonymizedHistoryAndContext;
@property (nonatomic) char hasJrAnonymizedHistoryAndContext;
@property (nonatomic) char didJRForcePrompt;
@property (nonatomic) char hasDidJRForcePrompt;
@property (retain, nonatomic) JRSchemaJRModelDiagnosticsSignals *modelDiagnosticSignals;
@property (nonatomic) char hasModelDiagnosticSignals;
@property (retain, nonatomic) JRSchemaJRAction *shadowAction;
@property (nonatomic) char hasShadowAction;
@property (retain, nonatomic) JRSchemaJRActionCandidateTuple *shadowCandidates;
@property (nonatomic) char hasShadowCandidates;
@property (copy, nonatomic) NSArray *userHistorys;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAction;
- (void)addUserHistory:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearUserHistory;
- (void)deleteCandidates;
- (void)deleteDidJRForcePrompt;
- (void)deleteJrAnonymizedHistoryAndContext;
- (void)deleteModelDiagnosticSignals;
- (void)deleteRanking;
- (void)deleteShadowAction;
- (void)deleteShadowCandidates;
- (void)deleteUserHistory;
- (id)suppressMessageUnderConditions;
- (id)userHistoryAtIndex:(unsigned long long)a0;
- (unsigned long long)userHistoryCount;

@end

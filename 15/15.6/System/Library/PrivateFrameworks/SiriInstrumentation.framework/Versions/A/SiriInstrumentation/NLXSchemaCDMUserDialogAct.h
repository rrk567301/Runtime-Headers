@class NLXSchemaCDMUserAcknowledged, NLXSchemaCDMUserStatedTask, NLXSchemaCDMUserWantedToUndo, NLXSchemaCDMUserWantedToProceed, USOSchemaUSOGraph, NLXSchemaCDMUserAccepted, NLXSchemaCDMUserWantedToRepeat, USOSchemaUSOUtteranceAlignment, NLXSchemaCDMDelegatedUserDialogAct, NLXSchemaCDMUserWantedToPause, NLXSchemaCDMUserRejected, NSData, NLXSchemaCDMUserCancelled;

@interface NLXSchemaCDMUserDialogAct : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSOUtteranceAlignment *alignment;
@property (nonatomic) char hasAlignment;
@property (retain, nonatomic) USOSchemaUSOGraph *reference;
@property (nonatomic) char hasReference;
@property (retain, nonatomic) NLXSchemaCDMUserAccepted *accepted;
@property (nonatomic) char hasAccepted;
@property (retain, nonatomic) NLXSchemaCDMUserRejected *rejected;
@property (nonatomic) char hasRejected;
@property (retain, nonatomic) NLXSchemaCDMUserCancelled *cancelled;
@property (nonatomic) char hasCancelled;
@property (retain, nonatomic) NLXSchemaCDMUserWantedToRepeat *wantedToRepeat;
@property (nonatomic) char hasWantedToRepeat;
@property (retain, nonatomic) NLXSchemaCDMUserAcknowledged *acknowledged;
@property (nonatomic) char hasAcknowledged;
@property (retain, nonatomic) NLXSchemaCDMUserWantedToProceed *wantedToProceed;
@property (nonatomic) char hasWantedToProceed;
@property (retain, nonatomic) NLXSchemaCDMUserWantedToPause *wantedToPause;
@property (nonatomic) char hasWantedToPause;
@property (retain, nonatomic) NLXSchemaCDMDelegatedUserDialogAct *delegated;
@property (nonatomic) char hasDelegated;
@property (retain, nonatomic) NLXSchemaCDMUserStatedTask *userStatedTask;
@property (nonatomic) char hasUserStatedTask;
@property (retain, nonatomic) NLXSchemaCDMUserWantedToUndo *wantedToUndo;
@property (nonatomic) char hasWantedToUndo;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichUserdialogacttype;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCancelled;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAlignment;
- (void)deleteDelegated;
- (void)deleteReference;
- (void)deleteAccepted;
- (void)deleteAcknowledged;
- (void)deleteRejected;
- (void)deleteUserStatedTask;
- (void)deleteWantedToPause;
- (void)deleteWantedToProceed;
- (void)deleteWantedToRepeat;
- (void)deleteWantedToUndo;
- (id)suppressMessageUnderConditions;

@end

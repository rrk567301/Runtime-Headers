@class ISDCallHistory;

@interface ISyncInstrumentedSession : ISyncConcreteSession {
    ISDCallHistory *_callHistory;
}

- (void)dealloc;
- (void)finishSyncing;
- (BOOL)prepareToPullChangesForEntityNames:(id)a0 beforeDate:(id)a1;
- (void)cancelSyncing;
- (void)cancelSyncing:(id)a0;
- (BOOL)shouldPullChangesForEntityName:(id)a0;
- (BOOL)shouldPushChangesForEntityName:(id)a0;
- (void)pushChangesFromRecord:(id)a0 withIdentifier:(id)a1;
- (void)clientChangedRecordIdentifiers:(id)a0;
- (void)_enterFinished;
- (void)_enterCancelled;
- (id)initWithClient:(id)a0 entityNames:(id)a1;
- (id)clientInfoForRecordWithIdentifier:(id)a0;
- (void)setClientInfo:(id)a0 forRecordWithIdentifier:(id)a1;
- (id)snapshotOfRecordsInTruth;
- (void)clientLostRecordWithIdentifier:(id)a0 shouldReplaceOnNextSync:(BOOL)a1;
- (void)clientDidResetEntityNames:(id)a0;
- (void)clientWantsToPushAllRecordsForEntityNames:(id)a0;
- (BOOL)shouldPushAllRecordsForEntityName:(id)a0;
- (BOOL)shouldReplaceAllRecordsOnClientForEntityName:(id)a0;
- (void)pushChange:(id)a0;
- (void)deleteRecordWithIdentifier:(id)a0;
- (void)clientFinishedPushingChangesWithNextAnchors:(id)a0;
- (void)prepareToPullChangesInBackgroundForEntityNames:(id)a0 target:(id)a1 selector:(SEL)a2;
- (id)changeEnumeratorForEntityNames:(id)a0;
- (void)clientAcceptedChangesForRecordWithIdentifier:(id)a0 formattedRecord:(id)a1 newRecordIdentifier:(id)a2;
- (void)clientRefusedChangesForRecordWithIdentifier:(id)a0;
- (void)clientCommittedAcceptedChanges;
- (void)clientCommittedAcceptedChangesWithNextAnchors:(id)a0;

@end

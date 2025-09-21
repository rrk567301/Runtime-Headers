@interface _TtCC24SensitiveContentAnalysis15AnalysisHistoryP33_5B72C479793E9A28B06909F4B47E09798Listener : NSObject <SensitiveContentAnalysis.AnalysisStorageXPCProtocol> {
    void /* unknown type, empty encoding */ historyUpdated;
}

- (id)init;
- (void).cxx_destruct;
- (void)_analysesFromMostRecentCommunicationsWith:(id)a0 completion:(id /* block */)a1;
- (void)_clearMostRecentAnalysesForParticipants:(id)a0 completion:(id /* block */)a1;
- (void)_participantsUpdated:(id)a0 participantsRemoved:(id)a1 completion:(id /* block */)a2;
- (void)_storeMostRecentAnalysis:(id)a0 forHandles:(id)a1 completion:(id /* block */)a2;
- (void)_waitForClientsToUpdate:(id /* block */)a0;

@end

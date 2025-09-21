@class NSObject;
@protocol OS_dispatch_queue;

@interface SKGUpdaterAgent : CSXPCConnection <SDSignalHandlerDelegate, SDLockHandlerDelegate> {
    _Atomic BOOL _didStart;
}

@property (retain) NSObject<OS_dispatch_queue> *clientCheckInQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockHandlerQueue;

+ (void)initialize;
+ (id)sharedAgent;
+ (BOOL)enableEventUpdaters;

- (BOOL)addClientConnectionIfAllowedForConnection:(id)a0;
- (void)deviceStateWillChange:(BOOL)a0;
- (BOOL)start;
- (void)_setup;
- (void)lockingCx;
- (BOOL)handleCommand:(const char *)a0 info:(id)a1 connection:(id)a2;
- (void)locked;
- (void)unlocked;
- (void)locking;
- (void)lockedCx;
- (void).cxx_destruct;
- (id)indexQueue;
- (void)didReceiveMemoryPressureNotification:(unsigned long long)a0;
- (void)didReceiveSignal:(unsigned long long)a0;
- (void)firstUnlockSBCompleted;
- (void)migrationCompleted;
- (BOOL)embeddingsSupported;
- (BOOL)enableAppEntities;
- (BOOL)enableDocumentUnderstanding;
- (BOOL)enableEmbeddings;
- (BOOL)enableSuggestedEvents;
- (BOOL)handleDiagnose:(id)a0;
- (BOOL)_doStart;
- (BOOL)enableKeyPhrases;
- (BOOL)enableProcessingStateUpdater;
- (id)encodeProcessorReport:(id)a0;
- (id)encodeProgressReport:(id)a0;
- (id)formatProgressReport:(id)a0;
- (BOOL)handleCheckedInMessage:(id)a0;
- (BOOL)handleDocumentUnderstandingProgressReport:(id)a0;
- (BOOL)handleEmbeddingCompleteness:(id)a0;
- (BOOL)handleEmbeddingGenerationConfiguration:(id)a0;
- (BOOL)handleEmbeddingProgressReport:(id)a0;
- (BOOL)handleEventsJournalsStats:(id)a0;
- (BOOL)handleExtendedKeyphraseProgressReport:(id)a0;
- (BOOL)handleHistoricalReports:(id)a0;
- (BOOL)handleKeyphraseProgressReport:(id)a0;
- (BOOL)handleLaunchUpgradeTasks:(id)a0;
- (BOOL)handleProcessRecordMessage:(id)a0;
- (BOOL)handleProgressReport:(id)a0;
- (BOOL)handleSuggestedEventsProgressReport:(id)a0;
- (BOOL)handleTurboMessage:(id)a0;

@end

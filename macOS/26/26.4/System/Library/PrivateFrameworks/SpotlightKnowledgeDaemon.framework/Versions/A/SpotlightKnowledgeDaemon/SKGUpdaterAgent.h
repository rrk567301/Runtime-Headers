@class SKDUpdaterDaemon, NSObject;
@protocol OS_dispatch_queue, SKDDefaultsProviding;

@interface SKGUpdaterAgent : CSXPCConnection <SDLockHandlerDelegate> {
    id<SKDDefaultsProviding> _defaults;
    _Atomic BOOL _didStart;
}

@property (retain) NSObject<OS_dispatch_queue> *clientCheckInQueue;
@property (readonly, nonatomic) id<SKDDefaultsProviding> defaults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockHandlerQueue;
@property (retain, nonatomic) SKDUpdaterDaemon *updaterDaemon;

+ (void)initialize;
+ (id)sharedAgent;
+ (BOOL)enableEventUpdaters;
+ (void)setListenerName:(id)a0;

- (void)locked;
- (BOOL)handleCommand:(const char *)a0 info:(id)a1 connection:(id)a2;
- (void)setDefaults:(id)a0;
- (void)_setup;
- (void)locking;
- (void)deviceStateWillChange:(BOOL)a0;
- (id)indexQueue;
- (BOOL)addClientConnectionIfAllowedForConnection:(id)a0;
- (void)lockedCx;
- (void).cxx_destruct;
- (void)lockingCx;
- (void)unlocked;
- (void)start;
- (void)firstUnlockSBCompleted;
- (void)migrationCompleted;
- (BOOL)embeddingsSupported;
- (BOOL)enableAppEntities;
- (BOOL)enableEmbeddings;
- (BOOL)handleDiagnose:(id)a0;
- (void)_doStart;
- (BOOL)enableKeyPhrases;
- (BOOL)enableProcessingStateUpdater;
- (id)encodeProcessorReport:(id)a0;
- (id)encodeProgressReport:(id)a0;
- (id)formatProgressReport:(id)a0;
- (BOOL)handleCheckedInMessage:(id)a0;
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

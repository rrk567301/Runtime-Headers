@class NSError, NSString, MPRemoteCommandEvent, MPRemoteCommandStatus, MPCPlaybackIntent, MRSendCommandResultStatus, MPNowPlayingInfoTransportableSessionResponse, MPSetPlaybackQueueCommandEvent, MPAVItem, MPSetPlaybackSessionCommandEvent;
@protocol MPNowPlayingInfoTransportableSessionRequest;

@interface _MPCMediaRemotePublisher_Swift : NSObject {
    void /* unknown type, empty encoding */ publisher;
    void /* unknown type, empty encoding */ dialogHandler;
    void /* unknown type, empty encoding */ _migrationRequirements;
}

- (id)init;
- (void).cxx_destruct;
- (id)processStatus:(id)a0 withCommandEvent:(id)a1;
- (void)_getFallbackIntentForEvent:(MPRemoteCommandEvent *)a0 withCompletion:(void (^)(MPCPlaybackIntent *, NSError *))a1;
- (void)delegateAccountEvent:(MPRemoteCommandEvent *)a0 completion:(void (^)(MPRemoteCommandStatus *))a1;
- (void)didEndMigration:(NSString *)a0 setPlaybackSessionCommandStatus:(MRSendCommandResultStatus *)a1 error:(NSError *)a2 completion:(void (^)(NSError *))a3;
- (void)findContentItemIDWithIncomingContentItemID:(NSString *)a0 trackID:(long long)a1 completion:(void (^)(NSString *, NSError *))a2;
- (id)getMigrationRequirementsFilterDataForAccounts:(id)a0 features:(unsigned long long)a1;
- (BOOL)getRequestingImmediatePlaybackFromSetPlaybackSessionCommandEvent:(id)a0;
- (id)getSwiftQOSDialogForError:(id)a0 withItem:(id)a1;
- (void)getTransportablePlaybackSessionRepresentationForRequest:(id<MPNowPlayingInfoTransportableSessionRequest>)a0 completion:(void (^)(MPNowPlayingInfoTransportableSessionResponse *, NSError *))a1;
- (id)initWithPublisher:(id)a0;
- (void)performDialogActionForCommandEvent:(MPRemoteCommandEvent *)a0 completion:(void (^)(NSError *))a1;
- (void)performSetQueueWithEvent:(MPSetPlaybackQueueCommandEvent *)a0 installQueueBeforeLoaded:(BOOL)a1 donatedStartPlayerItem:(MPAVItem *)a2 completion:(void (^)(NSError *))a3;
- (void)performSetSessionWithEvent:(MPSetPlaybackSessionCommandEvent *)a0 completion:(void (^)(MPRemoteCommandStatus *))a1;
- (BOOL)sonicStageCondition:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (void)willBeginSessionMigrationWithIdentifier:(id)a0;

@end

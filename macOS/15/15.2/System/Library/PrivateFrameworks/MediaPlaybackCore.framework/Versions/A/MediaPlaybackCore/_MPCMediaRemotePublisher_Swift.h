@class NSString, MPSetPlaybackQueueCommandEvent, MPSetPlaybackSessionCommandEvent, NSError, MPRemoteCommandEvent;

@interface _MPCMediaRemotePublisher_Swift : NSObject {
    void /* unknown type, empty encoding */ publisher;
    void /* unknown type, empty encoding */ dialogHandler;
}

- (id)init;
- (void).cxx_destruct;
- (id)processStatus:(id)a0 withCommandEvent:(id)a1;
- (void)findContentItemIDWithIncomingContentItemID:(NSString *)a0 trackID:(long long)a1 completion:(void (^)(NSString *, NSError *))a2;
- (id)getSwiftQOSDialogForError:(id)a0 withItem:(id)a1;
- (id)initWithPublisher:(id)a0;
- (void)performDialogActionForCommandEvent:(MPRemoteCommandEvent *)a0 completion:(void (^)(NSError *))a1;
- (void)performSetQueueWithEvent:(MPSetPlaybackQueueCommandEvent *)a0 completion:(void (^)(NSError *))a1;
- (void)performSetSessionWithEvent:(MPSetPlaybackSessionCommandEvent *)a0 completion:(void (^)(NSError *))a1;

@end

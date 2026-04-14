@interface IMDaemonCore.ScheduledMessageMembershipObserver : NSObject {
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ chatRegistry;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)handleChatParticipantsDidChange:(id)a0;

@end

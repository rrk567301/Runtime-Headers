@interface IMDaemonCore.ScheduledMessageMembershipObserver : NSObject {
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ chatRegistry;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleChatParticipantsDidChange:(id)a0;

@end

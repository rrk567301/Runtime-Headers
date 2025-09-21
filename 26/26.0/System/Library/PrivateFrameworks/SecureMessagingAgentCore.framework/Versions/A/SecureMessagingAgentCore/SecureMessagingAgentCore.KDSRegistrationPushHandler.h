@interface SecureMessagingAgentCore.KDSRegistrationPushHandler : NSObject <IDSPushHandlerDelegate> {
    void /* unknown type, empty encoding */ pushTopics;
    void /* unknown type, empty encoding */ machPort;
    void /* unknown type, empty encoding */ state;
}

- (id)init;
- (void).cxx_destruct;
- (void)handler:(id)a0 didReceiveMessage:(id)a1 forTopic:(id)a2 fromID:(id)a3 messageContext:(id)a4;

@end

@interface SecureMessagingAgentCore.KDSRegistrationPushHandler : NSObject <IDSPushHandlerDelegate> {
    void /* unknown type, empty encoding */ pushTopics;
    void /* unknown type, empty encoding */ machPort;
    void /* unknown type, empty encoding */ state;
}

- (void).cxx_destruct;
- (id)init;
- (void)handler:(id)a0 didReceiveMessage:(id)a1 forTopic:(id)a2 fromID:(id)a3 messageContext:(id)a4;

@end

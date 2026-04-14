@interface CPBiomeSessionDonator : NSObject <CPConversationManagerDataSourceObserver> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ publishQueue;
    void /* unknown type, empty encoding */ biomeStream;
    void /* unknown type, empty encoding */ biomeStreamSender;
    void /* unknown type, empty encoding */ oldConversationInformation;
}

- (id)init;
- (void)conversationManager:(id)a0 conversationChanged:(id)a1;
- (id)initWithDataSource:(id)a0 parentQueue:(id)a1;
- (void).cxx_destruct;
- (void)conversationManager:(id)a0 removedConversationWithUUID:(id)a1;

@end

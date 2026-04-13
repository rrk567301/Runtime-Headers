@interface SiriAnalyticsMessageObserverHandle : NSObject {
    id /* block */ _messagesReceived;
    id /* block */ _willRelease;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMessagesReceived:(id /* block */)a0 willReleaseHandle:(id /* block */)a1;
- (void)messagesReceived:(id)a0;

@end

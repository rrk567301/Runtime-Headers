@interface AskTo.AppResponseHandler : NSObject <ATAppResponseHandlerProtocol> {
    void /* unknown type, empty encoding */ topicRegistrar;
    void /* unknown type, empty encoding */ undeliveredResponseCache;
    void /* unknown type, empty encoding */ undeliveredResponseIdentifierCache;
    void /* unknown type, empty encoding */ applicationIsReadyForResponses;
}

- (id)init;
- (void).cxx_destruct;
- (void)notifyApplicationDidFinishLaunching;
- (void)processIncomingResponses:(id)a0;

@end

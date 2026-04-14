@interface _TtCC28GenerativeExperiencesRuntime39ExternalTextCompositionXPCServiceServer6Server : NSObject <ExternalTextCompositionXPCProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ eventReporter;
    void /* unknown type, empty encoding */ asyncQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)cancelWithToken:(long long)a0;
- (void)requestShortFormSmartRepliesWithInputContextHistory:(id)a0 documentType:(id)a1 options:(id)a2 with:(id /* block */)a3;

@end

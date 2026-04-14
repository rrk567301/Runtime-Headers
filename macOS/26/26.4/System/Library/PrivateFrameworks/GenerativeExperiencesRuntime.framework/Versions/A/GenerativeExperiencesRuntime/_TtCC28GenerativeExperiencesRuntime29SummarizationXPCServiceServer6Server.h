@interface _TtCC28GenerativeExperiencesRuntime29SummarizationXPCServiceServer6Server : NSObject <SummarizationXPCProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ clientProcessIdentifier;
    void /* unknown type, empty encoding */ eventReporter;
    void /* unknown type, empty encoding */ asyncQueue;
    void /* unknown type, empty encoding */ taskTracker;
    void /* unknown type, empty encoding */ handler;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancelRequestWithIdentifier:(id)a0;
- (void)performStreamingSummarizationRequest:(id)a0 delegate:(id)a1;
- (void)performSummarizationRequest:(id)a0 with:(id /* block */)a1;

@end

@interface _TtCC24TextUnderstandingRuntime19ProcessingXPCServer6Server : NSObject <TextUnderstanding.ProcessingServiceXPCProtocol> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ connectionProcessIdentifier;
}

- (void).cxx_destruct;
- (id)init;
- (void)processWithDocumentData:(id)a0 requestsData:(id)a1 optionsData:(id)a2 with:(id /* block */)a3;

@end

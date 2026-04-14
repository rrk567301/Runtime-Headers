@interface _TtCC28GenerativeExperiencesRuntime30ClassificationXPCServiceServer6Server : NSObject <ClassificationXPCProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ clientProcessIdentifier;
    void /* unknown type, empty encoding */ eventReporter;
    void /* unknown type, empty encoding */ asyncQueue;
    void /* unknown type, empty encoding */ taskTracker;
    void /* unknown type, empty encoding */ _handler;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancelRequestWithIdentifier:(id)a0;
- (void)performClassificationRequest:(id)a0 with:(id /* block */)a1;

@end

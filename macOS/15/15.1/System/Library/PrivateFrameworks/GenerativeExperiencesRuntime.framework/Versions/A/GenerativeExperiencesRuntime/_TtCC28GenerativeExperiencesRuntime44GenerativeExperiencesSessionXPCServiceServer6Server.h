@interface _TtCC28GenerativeExperiencesRuntime44GenerativeExperiencesSessionXPCServiceServer6Server : NSObject <GenerativeExperiencesSessionXPCProtocol> {
    void /* unknown type, empty encoding */ requests;
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ clientProcessIdentifier;
    void /* unknown type, empty encoding */ session;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancelRequestWithUuid:(id)a0;
- (void)completeStreamWithQuery:(id)a0 tools:(id)a1 toolChoice:(id)a2 documents:(id)a3 parameters:(id)a4 schema:(id)a5 requestUUID:(id)a6 delegate:(id)a7;
- (void)completeWithQuery:(id)a0 tools:(id)a1 toolChoice:(id)a2 documents:(id)a3 parameters:(id)a4 schema:(id)a5 requestUUID:(id)a6 delegate:(id)a7;
- (void)initializeSessionWithConfiguration:(id)a0 with:(id /* block */)a1;
- (void)registerWithDocuments:(id)a0 requestUUID:(id)a1 delegate:(id)a2;
- (void)registeredDocumentsWith:(id /* block */)a0;
- (void)retrieveSessionFor:(id)a0 with:(id /* block */)a1;
- (void)retrieveSessionIDWith:(id /* block */)a0;
- (void)terminateSessionFor:(id)a0 with:(id /* block */)a1;

@end

@interface PowerlogLiteOperators.ACDiagnosticsClient : NSObject {
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ codeService;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ serialNumber;
    void /* unknown type, empty encoding */ build;
    void /* unknown type, empty encoding */ buildVariant;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ productCode;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ isBeta;
    void /* unknown type, empty encoding */ isInternal;
    void /* unknown type, empty encoding */ isAuthorizedToUpload;
    void /* unknown type, empty encoding */ taskManager;
}

- (void).cxx_destruct;
- (id)init;
- (id)clientInfoDict;
- (id)initClientWithBeta:(BOOL)a0 isUnitTest:(BOOL)a1 serialNumber:(id)a2;
- (BOOL)isDeviceAuthorizedToUpload;
- (void)shouldAdmitDiagnosticTimestamp:(unsigned long long)a0 requestID:(id)a1 flag:(id)a2 attemptNumber:(unsigned int)a3 completionHandler:(id /* block */)a4;

@end

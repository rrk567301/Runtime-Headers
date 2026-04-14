@interface FileProviderDaemon.FPCKReportSPSSection : FileProviderDaemon.FPCKReportSection {
    void /* unknown type, empty encoding */ superPendingSetErrors;
    void /* unknown type, empty encoding */ superPendingSetSize;
    void /* unknown type, empty encoding */ pendingSetErrors;
    void /* unknown type, empty encoding */ pendingSetSize;
    void /* unknown type, empty encoding */ detailedPayload;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

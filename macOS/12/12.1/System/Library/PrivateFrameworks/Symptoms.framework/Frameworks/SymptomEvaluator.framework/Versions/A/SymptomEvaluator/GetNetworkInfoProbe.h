@class NSMutableArray;

@interface GetNetworkInfoProbe : NetDiagnosticProbe {
    NSMutableArray *_probeOutputFilePaths;
}

@property (nonatomic) id /* block */ completionBlock;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)stopTest;
- (id)probeOutputFilePaths;
- (void)netDiagnosticTaskStatusChangedFor:(id)a0 toStatus:(int)a1;
- (BOOL)startNetDiagnosticsTask:(id /* block */)a0;

@end

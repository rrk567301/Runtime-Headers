@class NSMutableArray;

@interface GetNetworkInfoProbe : NetDiagnosticProbe {
    NSMutableArray *_probeOutputFilePaths;
}

@property (nonatomic) id /* block */ completionBlock;

- (id)initWithQueue:(id)a0;
- (void)stopTest;
- (void).cxx_destruct;
- (void)dealloc;
- (void)netDiagnosticTaskStatusChangedFor:(id)a0 toStatus:(int)a1;
- (id)probeOutputFilePaths;
- (BOOL)startNetDiagnosticsTask:(id /* block */)a0;

@end

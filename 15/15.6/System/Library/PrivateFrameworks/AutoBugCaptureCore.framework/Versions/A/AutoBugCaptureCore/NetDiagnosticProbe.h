@class NSString, NSMutableDictionary, NetDiagnosticsShim;

@interface NetDiagnosticProbe : TestProbe <NetDiagnosticsShimDelegate>

@property (retain, nonatomic) NetDiagnosticsShim *netDiags;
@property (retain, nonatomic) NSString *taskName;
@property (retain, nonatomic) NSString *ndFilePath;
@property (retain, nonatomic) NSMutableDictionary *netDiagsTaskDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelTest:(id /* block */)a0;
- (void)disconnectFromNetDiagnostics;
- (char)netDiagnosticsTaskInProgress:(id /* block */)a0;
- (id)setUpDefaultTaskDictionary;
- (char)startNetDiagnosticsTask:(id /* block */)a0;
- (char)stopNetDiagnosticsTask:(id /* block */)a0;

@end

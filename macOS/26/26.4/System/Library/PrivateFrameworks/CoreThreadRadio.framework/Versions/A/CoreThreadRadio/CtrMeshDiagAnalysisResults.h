@class CtrMeshDiagUnreliableNodesResult, CtrMeshDiagAsymmetricLinksResult, CtrMeshDiagBottleneckNodesResult, CtrMeshDiagUnreachableNodesResult, CtrMeshDiagUnsupportedEnhancedDiagnosticsResult, CtrMeshDiagResilienceResult, CtrMeshDiagCriticalNodesResult;

@interface CtrMeshDiagAnalysisResults : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CtrMeshDiagCriticalNodesResult *criticalNodesResult;
@property (readonly) CtrMeshDiagUnreliableNodesResult *unreliableNodesResult;
@property (readonly) CtrMeshDiagUnreachableNodesResult *unreachableNodesResult;
@property (readonly) CtrMeshDiagAsymmetricLinksResult *asymmetricLinksResult;
@property (readonly) CtrMeshDiagBottleneckNodesResult *bottleneckNodesResult;
@property (readonly) CtrMeshDiagUnsupportedEnhancedDiagnosticsResult *unsupportedEnhancedDiagnosticsResult;
@property (readonly) CtrMeshDiagResilienceResult *resilienceResult;
@property (readonly) unsigned short version;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCriticalNodesResult:(id)a0 unreliableNodesResult:(id)a1 unreachableNodesResult:(id)a2 asymmetricLinksResult:(id)a3 bottleneckNodesResult:(id)a4 unsupportedEnhancedDiagnosticsResult:(id)a5 resilienceResult:(id)a6 version:(unsigned short)a7;

@end

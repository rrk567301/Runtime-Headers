@class SCSensitivityAnalysis;

@interface SCVideoStreamAnalyzer : NSObject {
    void /* unknown type, empty encoding */ analyzer;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) SCSensitivityAnalysis *analysis;
@property (nonatomic, copy) id /* block */ analysisChangedHandler;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)analyzePixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1;
- (void)analyzePixelBuffer:(struct __CVBuffer { } *)a0;
- (void)analyzePixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)beginAnalysisOfCaptureDeviceInput:(id)a0 error:(id *)a1;
- (BOOL)beginAnalysisOfDecompressionSession:(struct OpaqueVTDecompressionSession { } *)a0 error:(id *)a1;
- (BOOL)beginAnalysisOfVideoProcessingDecompressionSession:(void *)a0 error:(id *)a1;
- (BOOL)beginAnalysisWithCaptureDeviceInput:(id)a0 error:(id *)a1;
- (BOOL)beginAnalysisWithDecompressionSession:(struct OpaqueVTDecompressionSession { } *)a0 error:(id *)a1;
- (BOOL)beginAnalysisWithVideoProcessingDecompressionSession:(void *)a0 error:(id *)a1;
- (void)continueStream;
- (id)encodeForConnection:(id)a0;
- (void)endAnalysis;
- (id)initWithAnalysisOfPreviousCall:(id)a0 participantUUID:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 options:(unsigned long long)a3 error:(id *)a4;
- (id)initWithAnalysisOfPreviousCall:(id)a0 participantUUID:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)initWithParticipantUUID:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)initWithParticipantUUID:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithParticipantUUID:(id)a0 streamDirection:(long long)a1 error:(id *)a2;
- (void)streamBecameVisible;

@end

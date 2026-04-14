@class MXCPUExceptionDiagnostic, MXDiskWriteExceptionDiagnostic;

@interface MXSpinTracerData : MXSourceData

@property (retain) MXCPUExceptionDiagnostic *cpuExceptionDiagnostic;
@property (retain) MXDiskWriteExceptionDiagnostic *diskWriteExceptionDiagnostic;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initPayloadDataWithDiagnostics:(id)a0;

@end

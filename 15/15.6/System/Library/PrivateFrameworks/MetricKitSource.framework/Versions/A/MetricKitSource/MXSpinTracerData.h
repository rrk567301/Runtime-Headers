@class MXCPUExceptionDiagnostic, MXDiskWriteExceptionDiagnostic;

@interface MXSpinTracerData : MXSourceData

@property (retain) MXCPUExceptionDiagnostic *cpuExceptionDiagnostic;
@property (retain) MXDiskWriteExceptionDiagnostic *diskWriteExceptionDiagnostic;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initPayloadDataWithDiagnostics:(id)a0;

@end

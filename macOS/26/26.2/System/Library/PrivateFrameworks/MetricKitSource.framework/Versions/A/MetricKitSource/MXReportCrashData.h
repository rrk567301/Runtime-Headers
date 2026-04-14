@class MXCrashDiagnostic;

@interface MXReportCrashData : MXSourceData

@property (retain) MXCrashDiagnostic *crashDiagnostic;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initPayloadDataWithDiagnostics:(id)a0;

@end

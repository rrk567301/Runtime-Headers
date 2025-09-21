@class MXCrashDiagnostic;

@interface MXReportCrashData : MXSourceData

@property (retain) MXCrashDiagnostic *crashDiagnostic;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initPayloadDataWithDiagnostics:(id)a0;

@end

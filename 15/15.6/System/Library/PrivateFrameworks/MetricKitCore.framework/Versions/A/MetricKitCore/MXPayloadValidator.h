@class NSObject;
@protocol OS_os_log;

@interface MXPayloadValidator : NSObject

@property (retain) NSObject<OS_os_log> *logHandle;

- (void).cxx_destruct;
- (id)initWithLogHandle:(id)a0;
- (char)validatePayload:(id)a0;
- (char)_validatePayload:(id)a0;
- (void)_sanitizeDeviceMetadataForDiagnostic:(id)a0;
- (char)_validateHangTracerData:(id)a0;
- (char)_validatePowerlogData:(id)a0;
- (char)_validateReportCrashData:(id)a0;
- (char)_validateSpinTracerData:(id)a0;

@end

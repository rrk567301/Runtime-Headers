@class SDRDiagnosticReporter, NSObject;
@protocol OS_dispatch_queue;

@interface RPAutoBugCapture : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) SDRDiagnosticReporter *reporter;

+ (id)sharedReporter;

- (void).cxx_destruct;
- (id)init;
- (void)reportIssueOfType:(unsigned long long)a0 issueContext:(id)a1 processName:(id)a2;
- (void)reportIssueOfType:(unsigned long long)a0 issueContext:(id)a1 processName:(id)a2 triggerThresholdValues:(id)a3;

@end

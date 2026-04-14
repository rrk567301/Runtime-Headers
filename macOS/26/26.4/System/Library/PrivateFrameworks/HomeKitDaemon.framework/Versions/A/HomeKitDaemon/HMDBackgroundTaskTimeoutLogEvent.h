@class NSString;

@interface HMDBackgroundTaskTimeoutLogEvent : HMMLogEvent <HMDDiagnosticReportLogging> {
    void /* function */ taskIdentifier;
}

@property (nonatomic, readonly) NSString *diagnosticReportEventType;
@property (nonatomic, readonly) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (nonatomic, readonly) NSString *taskIdentifier;
@property (nonatomic, readonly) double timeout;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStartTime:(double)a0;
- (id)initWithTaskIdentifier:(id)a0 timeout:(double)a1;
- (void)updateDiagnosticReportSignature:(id)a0;

@end

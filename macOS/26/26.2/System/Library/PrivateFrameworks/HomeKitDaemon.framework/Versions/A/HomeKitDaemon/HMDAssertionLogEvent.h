@class NSString;

@interface HMDAssertionLogEvent : HMMLogEvent <HMDDiagnosticReportLogging> {
    NSString *_description;
}

@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *reason;

- (id)initWithReason:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)updateDiagnosticReportSignature:(id)a0;

@end

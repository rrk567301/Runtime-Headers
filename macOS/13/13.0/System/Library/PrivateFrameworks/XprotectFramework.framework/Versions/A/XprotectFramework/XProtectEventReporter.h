@interface XProtectEventReporter : NSObject

- (id)init;
- (void)reportGKAssessmentData:(id)a0;
- (void)reportBehavioralDetection:(id)a0;
- (BOOL)reportEvent:(unsigned long long)a0 withData:(id)a1;

@end

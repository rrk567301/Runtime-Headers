@interface XProtectEventReporter : NSObject

- (id)init;
- (void)reportBehavioralDetection:(id)a0;
- (char)reportEvent:(unsigned long long)a0 withData:(id)a1;
- (void)reportGKAssessmentData:(id)a0;

@end

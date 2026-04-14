@interface CoreDiagnostics.TextualRepresentationBridge : NSObject

+ (id)crashReportBody:(id)a0;
+ (id)formatMTEPageTags:(id)a0 report:(id)a1;
+ (id)formatMemoryErrorReport:(id)a0;
+ (id)formatProbGuardReport:(id)a0;

- (id)init;

@end

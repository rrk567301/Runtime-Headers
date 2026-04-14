@interface IDDiagnosticsManager : NSObject

+ (id)sharedManager;

- (void)finishInstall;
- (void)recordDiagnosticMessage:(long long)a0 withData:(id)a1;
- (void)startNewInstall;
- (void)startMessageTransport;
- (void)finishMessageTransport;
- (void)recordBeginningOfQueueElement:(id)a0;
- (void)recordCompletionOfQueueElement:(id)a0 withDuration:(double)a1;
- (void)clearSingleDiagnosticMessage:(long long)a0;
- (void)recordFactoryInstall;

@end

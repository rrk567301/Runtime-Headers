@interface WDDiagnosticFileLogger : DDFileLogger

@property (nonatomic) char acceptsMessages;

- (void)logMessage:(id)a0;
- (id)initWithLogFileManager:(id)a0;

@end

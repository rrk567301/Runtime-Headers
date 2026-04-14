@class NSMutableDictionary;

@interface DMCLoggingSupport : NSObject

@property (retain, nonatomic) NSMutableDictionary *processes;
@property (retain, nonatomic) NSMutableDictionary *subsystems;

- (void)dealloc;
- (void)resetAll;
- (void).cxx_destruct;
- (void)enableDebugLoggingForProcesses:(id)a0;
- (void)enableDebugLoggingForSubsystems:(id)a0;

@end

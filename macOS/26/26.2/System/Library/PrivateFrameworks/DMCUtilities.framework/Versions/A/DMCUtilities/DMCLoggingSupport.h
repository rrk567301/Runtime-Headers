@class NSMutableDictionary;

@interface DMCLoggingSupport : NSObject

@property (retain, nonatomic) NSMutableDictionary *processes;
@property (retain, nonatomic) NSMutableDictionary *subsystems;

- (void)resetAll;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enableDebugLoggingForProcesses:(id)a0;
- (void)enableDebugLoggingForSubsystems:(id)a0;

@end

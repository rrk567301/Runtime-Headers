@class NSXPCConnection;

@interface WFRunnerPrewarmManager : NSObject

@property (retain, nonatomic) NSXPCConnection *runner;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)reset;
- (void)prewarmRunnerIfNecessary;

@end

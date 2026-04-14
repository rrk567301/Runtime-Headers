@class WFRunnerConnection;

@interface WFRunnerPrewarmManager : NSObject

@property (class, nonatomic, readonly) WFRunnerPrewarmManager *sharedManager;

@property (nonatomic, retain) WFRunnerConnection *connection;

- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (void)prewarmRunnerWithHostIfNecessary:(id)a0;

@end

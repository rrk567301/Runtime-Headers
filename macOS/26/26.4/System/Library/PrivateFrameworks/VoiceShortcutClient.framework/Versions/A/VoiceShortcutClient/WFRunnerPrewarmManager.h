@class WFRunnerConnection;

@interface WFRunnerPrewarmManager : NSObject

@property (class, nonatomic, readonly) WFRunnerPrewarmManager *sharedManager;

@property (nonatomic, retain) WFRunnerConnection *connection;

- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (void)prewarmRunnerWithHostIfNecessary:(id)a0;

@end

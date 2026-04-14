@class WFRunnerConnection;

@interface WFRunnerPrewarmManager : NSObject

@property (class, nonatomic, readonly) WFRunnerPrewarmManager *sharedManager;

@property (nonatomic, retain) WFRunnerConnection *connection;

- (void)reset;
- (id)init;
- (void).cxx_destruct;
- (void)prewarmRunnerWithHostIfNecessary:(id)a0;

@end

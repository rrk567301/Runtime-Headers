@class WFRunnerConnection;

@interface WFRunnerPrewarmManager : NSObject

@property (class, nonatomic, readonly) WFRunnerPrewarmManager *sharedManager;

@property (nonatomic, retain) WFRunnerConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)prewarmRunnerWithHostIfNecessary:(id)a0;

@end

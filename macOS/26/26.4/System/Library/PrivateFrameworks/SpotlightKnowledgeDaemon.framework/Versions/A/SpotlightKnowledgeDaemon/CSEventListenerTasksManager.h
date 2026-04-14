@class NSArray, NSDictionary, SKDScheduler;

@interface CSEventListenerTasksManager : NSObject {
    NSArray *_delegates;
    NSDictionary *_tasks;
}

@property (readonly, nonatomic) SKDScheduler *scheduler;

+ (id)sharedInstance;
+ (void)initialize;
+ (void)setTurboModeOnForUnitTest;

- (id)initWithScheduler:(id)a0;
- (_Atomic BOOL *)allowed;
- (void).cxx_destruct;
- (BOOL)turboMode;
- (void)setTurboMode:(BOOL)a0;
- (void)registerEventListenerDelegates:(id)a0;
- (void)startTaskForIndexType:(unsigned int)a0 delegate:(id)a1;
- (BOOL)alwaysAllowed:(id)a0;
- (void)endJobForDelegate:(id)a0;
- (void)endTaskForIndexType:(unsigned int)a0 delegate:(id)a1;
- (void)eventListenerManagerSetupScheduler;
- (void)launchIntensiveTasks;
- (void)launchQueryUpdatesTasks;
- (BOOL)taskAllowedForName:(id)a0 eventType:(int)a1 indexType:(unsigned int)a2;

@end

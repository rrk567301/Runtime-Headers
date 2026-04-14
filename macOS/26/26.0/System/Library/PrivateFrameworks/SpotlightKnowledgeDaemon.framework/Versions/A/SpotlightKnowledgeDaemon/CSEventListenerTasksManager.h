@class NSArray, NSDictionary;

@interface CSEventListenerTasksManager : NSObject {
    NSArray *_delegates;
    NSDictionary *_tasks;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (void)setTurboModeOnForUnitTest;

- (_Atomic BOOL *)allowed;
- (void).cxx_destruct;
- (BOOL)turboMode;
- (void)setTurboMode:(BOOL)a0;
- (void)startTaskForIndexType:(int)a0 delegate:(id)a1;
- (void)registerEventListenerDelegates:(id)a0;
- (BOOL)alwaysAllowed:(id)a0;
- (void)endJobForDelegate:(id)a0;
- (void)endTaskForIndexType:(int)a0 delegate:(id)a1;
- (void)eventListenerManagerSetupScheduler;
- (void)launchIntensiveTasks;
- (void)launchQueryUpdatesTasks;
- (BOOL)taskAllowedForName:(id)a0 eventType:(int)a1 indexType:(int)a2;

@end

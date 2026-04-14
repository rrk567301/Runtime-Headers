@class NSObject;
@protocol OS_dispatch_queue;

@interface CSXPCEventListener : NSObject {
    BOOL _started;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)disable;
+ (id)sharedInstance;
+ (void)initialize;

- (void)handleDeviceLocking;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (id)description;
- (void)setTurboMode:(BOOL)a0;
- (int)embeddingsJobCount;
- (void)handleDeviceUnlocked;
- (void)handleEmbeddingsTaskScheduling;
- (void)handleKeyphrasesTaskScheduling;
- (BOOL)handleMessage:(id)a0 connection:(id)a1;
- (void)handlePriorityTaskScheduling;
- (int)jobCountWithTaskName:(id)a0;
- (int)keyphrasesJobCount;
- (void)launchQueryUpdatesTasks;
- (void)lostConnection:(id)a0 error:(id)a1;
- (int)priorityJobCount;
- (void)runJobWithTaskName:(id)a0;
- (void)startWithEventListeners:(id)a0;
- (void)updatePathSet:(id)a0 withFilesAtPath:(id)a1 shouldRemove:(BOOL)a2;

@end

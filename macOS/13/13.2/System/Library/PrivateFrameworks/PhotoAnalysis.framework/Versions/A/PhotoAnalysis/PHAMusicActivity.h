@class NSArray, NSString, PGManager, NSObject;
@protocol OS_dispatch_queue, PHAActivityDelegate, OS_xpc_object;

@interface PHAMusicActivity : NSObject <PHPhotoLibraryAvailabilityObserver, PHAActivity>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSArray *musicJobs;
@property (readonly, nonatomic) id<PHAActivityDelegate> delegate;
@property (readonly, nonatomic) PGManager *graphManager;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (nonatomic) BOOL doneRequested;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)unregister;

- (id)init;
- (void).cxx_destruct;
- (void)photoLibraryDidBecomeUnavailable:(id)a0;
- (void)startActivity;
- (void)registerActivityWithDelegate:(id)a0;
- (void)scheduleNextJob;
- (void)onDidScheduleAllJobs;
- (BOOL)haltIfNeeded;
- (BOOL)jobCanContinue;
- (void)readShouldDefer:(BOOL *)a0 doneRequested:(BOOL *)a1;
- (void)haltWithState:(long long)a0;

@end

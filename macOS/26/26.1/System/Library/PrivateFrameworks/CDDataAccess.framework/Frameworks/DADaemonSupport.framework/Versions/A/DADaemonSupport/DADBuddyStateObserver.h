@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface DADBuddyStateObserver : NSObject {
    NSObject<OS_dispatch_source> *_buddyStatePollingTimer;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _hasRegisteredForNotification;
}

@property (copy, nonatomic) id /* block */ buddyDidFinishHandler;

+ (BOOL)isSetupUser;
+ (BOOL)hasPassedBuddy;
+ (Class)saUserSetupStateClass;
+ (unsigned int)kMBSetupUserUID;

- (BOOL)isRunning;
- (void)start;
- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (void)buddyDidFinish;
- (void)checkBuddyStatus;
- (void)createPeriodicPollingTimer;
- (void)stopWithAssertQueue:(BOOL)a0;

@end

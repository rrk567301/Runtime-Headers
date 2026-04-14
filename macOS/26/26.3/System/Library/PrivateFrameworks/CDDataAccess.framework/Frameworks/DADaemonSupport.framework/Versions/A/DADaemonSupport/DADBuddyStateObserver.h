@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface DADBuddyStateObserver : NSObject {
    NSObject<OS_dispatch_source> *_buddyStatePollingTimer;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _hasRegisteredForNotification;
}

@property (copy, nonatomic) id /* block */ buddyDidFinishHandler;

+ (unsigned int)kMBSetupUserUID;
+ (BOOL)isSetupUser;
+ (Class)saUserSetupStateClass;
+ (BOOL)hasPassedBuddy;

- (id)initWithQueue:(id)a0;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isRunning;
- (void)buddyDidFinish;
- (void)checkBuddyStatus;
- (void)createPeriodicPollingTimer;
- (void)stopWithAssertQueue:(BOOL)a0;

@end

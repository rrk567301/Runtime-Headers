@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface DADBuddyStateObserver : NSObject {
    NSObject<OS_dispatch_source> *_buddyStatePollingTimer;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _hasRegisteredForNotification;
}

@property (copy, nonatomic) id /* block */ buddyDidFinishHandler;

+ (unsigned int)kMBSetupUserUID;
+ (char)hasPassedBuddy;
+ (char)isSetupUser;
+ (Class)saUserSetupStateClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (char)isRunning;
- (void)stop;
- (id)initWithQueue:(id)a0;
- (void)buddyDidFinish;
- (void)checkBuddyStatus;
- (void)createPeriodicPollingTimer;
- (void)stopWithAssertQueue:(char)a0;

@end

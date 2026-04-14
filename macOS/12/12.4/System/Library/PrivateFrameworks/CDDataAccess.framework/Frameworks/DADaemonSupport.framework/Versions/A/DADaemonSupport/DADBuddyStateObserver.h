@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface DADBuddyStateObserver : NSObject {
    NSObject<OS_dispatch_source> *_buddyStatePollingTimer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasRegisteredForNotification;
}

@property (copy, nonatomic) id /* block */ buddyDidFinishHandler;

+ (unsigned int)kMBSetupUserUID;
+ (Class)saUserSetupStateClass;
+ (BOOL)hasPassedBuddy;
+ (BOOL)isSetupUser;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (id)initWithQueue:(id)a0;
- (void)stop;
- (BOOL)isRunning;
- (void)stopWithAssertQueue:(BOOL)a0;
- (void)buddyDidFinish;
- (void)createPeriodicPollingTimer;
- (void)checkBuddyStatus;

@end

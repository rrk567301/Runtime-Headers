@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface DADBuddyStateObserver : NSObject {
    NSObject<OS_dispatch_source> *_buddyStatePollingTimer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasRegisteredForNotification;
}

@property (copy, nonatomic) id /* block */ buddyDidFinishHandler;

+ (unsigned int)kMBSetupUserUID;
+ (BOOL)hasPassedBuddy;
+ (BOOL)isSetupUser;
+ (Class)saUserSetupStateClass;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)start;
- (BOOL)isRunning;
- (void)stop;
- (void)buddyDidFinish;
- (void)checkBuddyStatus;
- (void)createPeriodicPollingTimer;
- (void)stopWithAssertQueue:(BOOL)a0;

@end

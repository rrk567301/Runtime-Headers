@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface DADBuddyStateObserver : NSObject {
    NSObject<OS_dispatch_source> *_buddyStatePollingTimer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasRegisteredForNotification;
}

@property (copy, nonatomic) id /* block */ buddyDidFinishHandler;

+ (Class)saUserSetupStateClass;
+ (unsigned int)kMBSetupUserUID;
+ (BOOL)isSetupUser;
+ (BOOL)hasPassedBuddy;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (id)initWithQueue:(id)a0;
- (BOOL)isRunning;
- (void)stop;
- (void)stopWithAssertQueue:(BOOL)a0;
- (void)createPeriodicPollingTimer;
- (void)checkBuddyStatus;
- (void)buddyDidFinish;

@end

@class NSObject;
@protocol OS_dispatch_queue, ASDTUserActivityNotifierDelegate;

@interface ASDTUserActivityNotifier : NSObject {
    unsigned long long _userActivityLevelChangeNotification;
}

@property (weak, nonatomic) id<ASDTUserActivityNotifierDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL userIsActive;

+ (void)logUserActiveBits:(unsigned long long)a0 withPrefix:(id)a1;
+ (id)notifierForDelegate:(id)a0 withName:(id)a1;
+ (id)notifierForDelegate:(id)a0 withQueue:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)deregisterUserActivityLevelNotification;
- (id)initForDelegate:(id)a0 withName:(id)a1;
- (id)initForDelegate:(id)a0 withQueue:(id)a1;
- (BOOL)registerUserActivityLevelNotification;

@end

@class NSObject;
@protocol OS_dispatch_queue;

@interface AVApplicationStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    char _hostApplicationInForeground;
    id _didEnterBackgroundNotificationToken;
    id _willEnterForegroundNotificationToken;
}

@property (getter=isHostApplicationInForeground, setter=setHostApplicationInForeground:) char hostApplicationInForeground;

+ (void)initialize;
+ (id)sharedApplicationStateMonitor;

- (void)dealloc;
- (id)init;

@end

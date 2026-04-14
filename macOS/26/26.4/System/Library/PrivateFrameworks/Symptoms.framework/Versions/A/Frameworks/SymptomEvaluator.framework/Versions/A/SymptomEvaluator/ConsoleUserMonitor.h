@class NSNumber, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ConsoleUserMonitor : NSObject {
    NSObject<OS_dispatch_queue> *monitor_queue;
    struct __SCDynamicStore { } *scDynamicStore;
}

@property (retain, nonatomic) NSNumber *consoleUID;
@property (retain, nonatomic) NSString *consoleUserName;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)enableConsoleNotifications;
- (id)init;
- (void)dealloc;
- (void)getCurrentConsoleUser;

@end

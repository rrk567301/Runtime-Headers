@class NSObject;
@protocol OS_dispatch_queue;

@interface SFWiFiLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedLogger;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)_captureLogs;
- (void)captureLogs;

@end

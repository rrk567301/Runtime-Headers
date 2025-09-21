@class NSTimer, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface ACDAccountSync : NSObject {
    int _circleToken;
    int _keychainToken;
    NSTimer *_timer;
    NSObject<OS_dispatch_queue> *_syncQueue;
    char _enabled;
    char _duchessEnabled;
    ACAccountStore *_store;
}

+ (id)accountSyncPropertiesForAccount:(id)a0;
+ (id)accountSyncSupportedTypes;
+ (id)accountSyncUnsupportedTypes;
+ (id)sharedAccountSyncServer;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)checkCircleState;
- (void)setupAccountSync;

@end

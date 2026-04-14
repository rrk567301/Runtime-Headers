@class NSTimer, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface ACDAccountSync : NSObject {
    int _circleToken;
    int _keychainToken;
    NSTimer *_timer;
    NSObject<OS_dispatch_queue> *_syncQueue;
    BOOL _enabled;
    BOOL _duchessEnabled;
    ACAccountStore *_store;
}

+ (id)sharedAccountSyncServer;
+ (id)accountSyncUnsupportedTypes;
+ (id)accountSyncSupportedTypes;
+ (id)accountSyncPropertiesForAccount:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setupAccountSync;
- (BOOL)checkCircleState;

@end

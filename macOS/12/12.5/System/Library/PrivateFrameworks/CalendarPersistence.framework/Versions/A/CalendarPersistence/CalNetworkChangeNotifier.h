@class NSMutableArray;

@interface CalNetworkChangeNotifier : NSObject {
    struct __SCDynamicStore { } *_store;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSMutableArray *_listeners;
    BOOL _pendingPost;
    BOOL _asleep;
    BOOL _checkedNetwork;
    BOOL _isNetworkUp;
}

+ (BOOL)enableNotifications;
+ (void)disableNotifications;
+ (BOOL)isNetworkUp;
+ (BOOL)isHostReachable:(id)a0;
+ (id)sharedNotifier;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_listenForChanges;
- (BOOL)isNetworkUp;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (BOOL)isHostReachable:(id)a0;
- (void)_cancelPost;
- (void)_sendNotification;
- (void)_delayPost;
- (void)_cancelAndRepostIfNecessary;
- (void)_goingToSleep:(id)a0;
- (void)_wakeUp:(id)a0;
- (void)_ACNetworkChange:(id)a0;

@end

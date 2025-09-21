@class NSString, NSTimer;

@interface ABNetworkController : NSObject {
    struct __SCDynamicStore { } *_store;
    NSString *_domainName;
    unsigned char _waitingForDialToFinish : 1;
    unsigned char _checkedNetwork : 1;
    unsigned char _isNetworkUp : 1;
    NSTimer *_notificationTimer;
}

+ (char)isHostReachable:(id)a0;
+ (id)sharedNetworkController;

- (void)dealloc;
- (id)init;
- (void)_postNotification:(id)a0;
- (char)isNetworkUp;
- (char)isHostReachable:(id)a0;
- (void)_postNetworkChangeNotification:(id)a0;
- (void)_triggerDialForHostname:(id)a0;
- (char)canReachAddress:(id)a0;
- (void)listenForNetworkChanges;

@end

@class NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ICSecurityInfo : NSObject {
    char _hasLoadedDeviceClassCUnlocked;
    char _hasLoadedContentProtectionEnabled;
    int _firstUnlockNotificationToken;
    NSMutableArray *_pendingFirstUnlockBlocks;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (class, readonly, nonatomic) ICSecurityInfo *sharedSecurityInfo;

@property (readonly, nonatomic, getter=isContentProtectionEnabled) char contentProtectionEnabled;
@property (readonly, nonatomic, getter=isDeviceUnlocked) char deviceUnlocked;
@property (readonly, nonatomic, getter=isDeviceClassCUnlocked) char deviceClassCUnlocked;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_processFirstUnlockNotification;
- (void)_getContentProtectionEnabled:(char *)a0 isDeviceClassCUnlocked:(char *)a1;
- (void)_loadContentProtectionEnabled:(char)a0 isDeviceClassCUnlocked:(char)a1;
- (void)performBlockAfterFirstUnlock:(id /* block */)a0;

@end

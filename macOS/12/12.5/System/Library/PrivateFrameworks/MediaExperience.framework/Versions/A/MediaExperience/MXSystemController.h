@class NSString, NSMutableDictionary;

@interface MXSystemController : NSObject {
    BOOL mAppWantsVolumeChanges;
    BOOL mCanBeNowPlayingApp;
    int mClientPID;
    int mPIDToInheritAppStateFrom;
    NSString *mDisplayID;
    NSMutableDictionary *mNotificationsSubscribedTo;
    BOOL mHasEntitlementForPIDInheritance;
    NSString *mRemoteDeviceID;
}

+ (void)updateMXSystemControllerList;
+ (void)notifyAll:(id)a0 payload:(id)a1 dontPostIfSuspended:(BOOL)a2;
+ (void)notifyAll:(id)a0 payload:(id)a1 dontPostIfSuspended:(BOOL)a2 remoteDeviceID:(id)a3;

- (void)dealloc;
- (id)info;
- (id)initWithPID:(int)a0;
- (int)setAttributeForKey:(id)a0 andValue:(const void *)a1;
- (id)initWithPID:(int)a0 remoteDeviceID:(id)a1;
- (int)copyAttributeForKey:(id)a0 withValueOut:(void *)a1;

@end

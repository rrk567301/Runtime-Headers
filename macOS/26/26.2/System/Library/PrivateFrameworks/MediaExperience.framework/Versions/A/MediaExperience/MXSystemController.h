@class NSMutableDictionary, NSString, NSData, NSLock;

@interface MXSystemController : NSObject {
    int mClientPID;
    NSMutableDictionary *mNotificationsSubscribedTo;
    NSLock *mNotificationsSubscribedToLock;
    NSData *mAuditToken;
    NSString *mBundleID;
}

+ (id)copyMXSystemControllerList:(BOOL)a0;
+ (void)mxSystemControllerListAddInstance:(id)a0 isSidekick:(BOOL)a1;
+ (void)notifyAll:(id)a0 payload:(id)a1 dontPostIfSuspended:(BOOL)a2;
+ (void)updateMXSystemControllerList;

- (int)setAttributeForKeyInternal:(id)a0 andValue:(const void *)a1;
- (int)copyAttributeForKeyInternal:(id)a0 withValueOut:(void *)a1;
- (int)setAttributeForKey:(id)a0 andValue:(const void *)a1;
- (id)info;
- (id)initWithPID:(int)a0;
- (int)copyAttributeForKey:(id)a0 withValueOut:(void *)a1;
- (int)startStevenoteManager:(int)a0;
- (int)startStevenoteManagerInternal:(int)a0;
- (void)dealloc;

@end

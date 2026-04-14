@class NSMutableDictionary, NSString, NSData, NSLock;

@interface MXSystemController : NSObject {
    int mClientPID;
    NSMutableDictionary *mNotificationsSubscribedTo;
    NSLock *mNotificationsSubscribedToLock;
    NSData *mAuditToken;
    NSString *mBundleID;
}

+ (void)mxSystemControllerListAddInstance:(id)a0 isSidekick:(BOOL)a1;
+ (id)copyMXSystemControllerList:(BOOL)a0;
+ (void)updateMXSystemControllerList;
+ (void)notifyAll:(id)a0 payload:(id)a1 dontPostIfSuspended:(BOOL)a2;

- (int)startStevenoteManagerInternal:(int)a0;
- (int)setAttributeForKey:(id)a0 andValue:(const void *)a1;
- (int)startStevenoteManager:(int)a0;
- (id)initWithPID:(int)a0;
- (int)copyAttributeForKeyInternal:(id)a0 withValueOut:(void *)a1;
- (int)copyAttributeForKey:(id)a0 withValueOut:(void *)a1;
- (int)setAttributeForKeyInternal:(id)a0 andValue:(const void *)a1;
- (void)dealloc;
- (id)info;

@end

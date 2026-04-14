@class NSMutableDictionary;

@interface MXSystemController : NSObject {
    int mClientPID;
    NSMutableDictionary *mNotificationsSubscribedTo;
}

+ (void)updateMXSystemControllerList;
+ (void)notifyAll:(id)a0 payload:(id)a1 dontPostIfSuspended:(BOOL)a2;

- (void)dealloc;
- (id)info;
- (id)initWithPID:(int)a0;
- (int)copyAttributeForKey:(id)a0 withValueOut:(void *)a1;
- (int)setAttributeForKey:(id)a0 andValue:(const void *)a1;

@end

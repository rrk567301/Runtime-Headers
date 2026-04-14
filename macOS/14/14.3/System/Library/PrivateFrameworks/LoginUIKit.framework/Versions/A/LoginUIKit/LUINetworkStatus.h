@class NSTimer, NSMutableSet, NSMutableDictionary;

@interface LUINetworkStatus : NSObject

@property (retain) NSMutableSet *targets;
@property unsigned long long networkStatusInternal;
@property BOOL parentNetworkExistsInternal;
@property BOOL hasParentNetworkInternal;
@property BOOL updateNetworkStatus;
@property struct __ODTrigger { } *onlineTrigger;
@property struct __ODTrigger { } *offlineTrigger;
@property (retain) NSMutableDictionary *remoteNodes;
@property (retain) NSTimer *notifyTimer;

+ (id)sharedNetworkStatus;

- (void)dealloc;
- (id)init;
- (unsigned long long)networkStatus;
- (void)_notifyTargetsNow:(id)a0;
- (void)addTarget:(id)a0;
- (BOOL)hasParentNetwork;
- (void)networkStatusNotifyTargets;
- (BOOL)networkStatusUpdate;
- (BOOL)parentNetworkExists;
- (void)removeTarget:(id)a0;

@end

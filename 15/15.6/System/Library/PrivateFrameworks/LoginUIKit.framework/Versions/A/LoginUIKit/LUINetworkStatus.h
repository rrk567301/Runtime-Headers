@class NSTimer, NSMutableSet, NSMutableDictionary;

@interface LUINetworkStatus : NSObject

@property (retain) NSMutableSet *targets;
@property unsigned long long networkStatusInternal;
@property char parentNetworkExistsInternal;
@property char hasParentNetworkInternal;
@property char updateNetworkStatus;
@property struct __ODTrigger { } *onlineTrigger;
@property struct __ODTrigger { } *offlineTrigger;
@property struct __ODTrigger { } *addTrigger;
@property struct __ODTrigger { } *deleteTrigger;
@property (retain) NSMutableDictionary *remoteNodes;
@property (retain) NSTimer *notifyTimer;

+ (id)sharedNetworkStatus;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)networkStatus;
- (void)_addNodeWithName:(id)a0;
- (void)_deleteNodeWithName:(id)a0;
- (void)_notifyTargetsNow:(id)a0;
- (void)addTarget:(id)a0;
- (char)hasParentNetwork;
- (void)networkStatusNotifyTargets;
- (char)networkStatusUpdate;
- (char)parentNetworkExists;
- (void)removeTarget:(id)a0;

@end

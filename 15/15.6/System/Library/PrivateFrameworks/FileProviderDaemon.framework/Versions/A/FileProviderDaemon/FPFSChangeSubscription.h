@class NSString, NSUUID, FPFSChangeMonitor, NSObject;
@protocol OS_dispatch_group, FPFSChangeSubscriptionDelegate;

@interface FPFSChangeSubscription : NSObject {
    NSObject<OS_dispatch_group> *_barrierGroup;
    NSUUID *_notifyStreamUUID;
    unsigned long long _notifyEventId;
    FPFSChangeMonitor *_weakReader;
    NSString *_purpose;
    char _ownRootFD;
}

@property (readonly, nonatomic) NSString *root;
@property (readonly, nonatomic) NSString *rootParent;
@property (readonly, nonatomic) unsigned long long rootFileID;
@property (readonly, nonatomic) int rootfd;
@property (weak) id<FPFSChangeSubscriptionDelegate> delegate;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) char ignoreOwnEvents;
@property (nonatomic) unsigned long long lastDeliveredEventID;
@property (copy, nonatomic) NSUUID *eventStreamUUID;
@property (nonatomic) char isActivated;

- (id)description;
- (void).cxx_destruct;
- (void)dispose;
- (char)activateWithError:(id *)a0;
- (id)waitableBarrier;
- (char)didProcessBarrierEventUUID:(id)a0;
- (void)didProcessEventID:(unsigned long long)a0;
- (id)initWithPath:(id)a0 fd:(int)a1 reader:(id)a2 sinceEventID:(unsigned long long)a3 streamUUID:(id)a4 ignoreOwnEvents:(char)a5 delegate:(id)a6 purpose:(id)a7;

@end

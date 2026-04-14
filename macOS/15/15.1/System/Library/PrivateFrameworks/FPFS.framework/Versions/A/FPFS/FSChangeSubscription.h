@class FSChangeMonitor, NSString, NSUUID, NSObject;
@protocol FSChangeSubscriptionDelegate, OS_dispatch_group;

@interface FSChangeSubscription : NSObject {
    NSObject<OS_dispatch_group> *_barrierGroup;
    NSUUID *_notifyStreamUUID;
    unsigned long long _notifyEventId;
    FSChangeMonitor *_weakReader;
    NSString *_purpose;
    BOOL _ownRootFD;
}

@property (readonly, nonatomic) NSString *root;
@property (readonly, nonatomic) NSString *rootParent;
@property (readonly, nonatomic) unsigned long long rootFileID;
@property (readonly, nonatomic) int rootfd;
@property (weak) id<FSChangeSubscriptionDelegate> delegate;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) BOOL ignoreOwnEvents;
@property (nonatomic) unsigned long long lastDeliveredEventID;
@property (retain, nonatomic) NSUUID *eventStreamUUID;
@property (nonatomic) BOOL isActivated;

- (id)description;
- (void).cxx_destruct;
- (void)dispose;
- (void)didProcessEventID:(unsigned long long)a0;
- (BOOL)activateWithError:(id *)a0;
- (id)waitableBarrier;
- (BOOL)didProcessBarrierEventUUID:(id)a0;
- (id)initWithPath:(id)a0 fd:(int)a1 reader:(id)a2 sinceEventID:(unsigned long long)a3 streamUUID:(id)a4 ignoreOwnEvents:(BOOL)a5 delegate:(id)a6 purpose:(id)a7;

@end

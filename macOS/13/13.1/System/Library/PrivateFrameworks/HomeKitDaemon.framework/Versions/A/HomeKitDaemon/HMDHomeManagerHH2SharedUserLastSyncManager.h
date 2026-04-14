@class HMDHomeManager, NSString, NSMutableDictionary, HMFTimer, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDHomeManagerHH2SharedUserLastSyncManager : HMFObject <HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _valid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHomeManager *_homeManager;
    NSMutableArray *_userLastSyncs;
    NSMutableDictionary *_homeToUserMap;
    NSDate *_creationDate;
    HMFTimer *_delayTimer;
}

@property (readonly, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void).cxx_destruct;
- (double)_interval;
- (id)shortDescription;
- (id)privateDescription;
- (void)configure;
- (void)timerDidFire:(id)a0;
- (BOOL)_shouldExpire;
- (id)initWithHomeManager:(id)a0 archivePaths:(id)a1;
- (double)_expireInterval;
- (double)_pushInterval;
- (BOOL)_shouldPushNow;
- (double)_nextInterval;
- (void)scheduleNextPush;
- (void)_scheduleNextPush;
- (void)_removeAllUserLastSyncData;
- (void)removeUserLastSyncData:(id)a0;
- (void)_pushAllUserSyncData;

@end

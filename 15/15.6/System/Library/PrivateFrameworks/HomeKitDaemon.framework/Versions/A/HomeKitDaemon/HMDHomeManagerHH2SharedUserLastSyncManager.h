@class NSDate, NSString, HMFTimer, HMDHomeManager, NSMutableDictionary, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDHomeManagerHH2SharedUserLastSyncManager : HMFObject <HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _valid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHomeManager *_homeManager;
    NSMutableArray *_userLastSyncs;
    NSMutableDictionary *_homeToUserMap;
    NSMutableSet *_managedMergeIDs;
    NSDate *_creationDate;
    HMFTimer *_delayTimer;
}

@property (readonly, getter=isValid) char valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)shortDescription;
- (id)privateDescription;
- (void)configure;
- (void)timerDidFire:(id)a0;
- (double)_expireInterval;
- (double)_interval;
- (double)_nextInterval;
- (void)_pushAllUserSyncData;
- (double)_pushInterval;
- (void)_removeAllUserLastSyncData;
- (void)_scheduleNextPush;
- (char)_shouldExpire;
- (char)_shouldPushNow;
- (id)initWithHomeManager:(id)a0 archivePaths:(id)a1;
- (char)isManagingUserWithMergeID:(id)a0;
- (void)removeUserLastSyncData:(id)a0;
- (void)scheduleNextPush;

@end

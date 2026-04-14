@class HMDHomePresenceUpdate, NSString, NSDictionary, NSMutableDictionary, HMDHomePresence, HMDBackgroundTaskAgentTimer;

@interface HMDHomePresenceMonitor : HMDHomePresenceBase <HMFLogging, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_presenceMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *presenceMap;
@property (retain, nonatomic) HMDHomePresence *currentHomePresence;
@property (retain, nonatomic) HMDHomePresenceUpdate *homePresenceUpdate;
@property (readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaAuditTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_registerForMessages;
- (void)timerFired:(id)a0;
- (void)removeUser:(id)a0;
- (void)configure:(id)a0 messageDispatcher:(id)a1;
- (void)addNewUser:(id)a0;
- (void)residentChanged;
- (void)_populatePresenceMapFromWorkingStore;
- (void)handleUserPresenceUpdate:(id)a0;
- (void)handleUserPresenceUpdateNotification:(id)a0;
- (void)_evaluatePresence:(id)a0 newUserPresence:(id)a1 presenceStatusUpdateReason:(id)a2;
- (void)_removeNonExistingUsers;
- (void)_preparePresenceMap;
- (void)_addUser:(id)a0;
- (void)handleUserHomePresencePayload:(id)a0 device:(id)a1 user:(id)a2 completion:(id /* block */)a3;
- (void)_saveUserPresenceToWorkingStore:(id)a0 forUser:(id)a1;
- (void)_updateUserPresence:(id)a0 presenceAuth:(id)a1 completion:(id /* block */)a2;
- (void)_auditPresenceMap;
- (void)_startAuditTimer;
- (void)handleHomeDataLoadedNotification:(id)a0;

@end

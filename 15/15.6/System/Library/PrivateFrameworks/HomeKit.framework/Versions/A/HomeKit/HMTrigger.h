@class NSUUID, NSString, NSDate, HMHome, HMUser, HMMutableArray, NSArray, _HMContext, NSObject, HMTriggerPolicy, HMDevice;
@protocol OS_dispatch_queue;

@interface HMTrigger : NSObject <HMFLogging, HMTriggerConfiguration, HMFMessageReceiver, NSSecureCoding, HMObjectMerge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isEnabled) char enabled;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (retain, nonatomic) _HMContext *context;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMMutableArray *currentActionSets;
@property (weak, nonatomic) HMHome *home;
@property (copy, nonatomic) NSDate *lastFireDate;
@property (retain, nonatomic) HMDevice *ownerDevice;
@property (weak, nonatomic) HMUser *owner;
@property (copy, nonatomic) NSString *configuredName;
@property (readonly, nonatomic) HMDevice *creatorDevice;
@property (readonly, weak, nonatomic) HMUser *creator;
@property (readonly, nonatomic) HMTriggerPolicy *policy;
@property (readonly, copy, nonatomic) NSArray *actionSets;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setPolicy:(id)a0;
- (id)logIdentifier;
- (void)addActionSet:(id)a0 completionHandler:(id /* block */)a1;
- (void)updatePolicy:(id)a0 completionHandler:(id /* block */)a1;
- (void)removePolicy:(id)a0 completionHandler:(id /* block */)a1;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_addActionSetOfType:(id)a0 completionHandler:(id /* block */)a1;
- (void)_enable:(char)a0 completionHandler:(id /* block */)a1;
- (void)_handleTriggerFired:(id)a0;
- (void)_handleTriggerFiredNotification:(id)a0;
- (void)_recomputeAssistantIdentifier;
- (void)_registerNotificationHandlers;
- (id)_serializeForAdd;
- (void)_unconfigure;
- (void)_updateActionSet:(id)a0 add:(char)a1 completionHandler:(id /* block */)a2;
- (char)_updateActionSetFromResponse:(id)a0 responsePayload:(id)a1;
- (void)_updateClientWithResults:(id /* block */)a0 withError:(id)a1;
- (char)_updateTriggerNameFromResponse:(id /* block */)a0 responsePayload:(id)a1;
- (void)addActionSetOfType:(id)a0 completionHandler:(id /* block */)a1;
- (void)addActionSetWithCompletionHandler:(id /* block */)a0;
- (char)compatibleWithApp;
- (id)copyAsBuilder;
- (void)enable:(char)a0 completionHandler:(id /* block */)a1;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (id)initWithName:(id)a0 configuredName:(id)a1;
- (char)mergeFromNewObject:(id)a0;
- (char)mergeFromNewObjectForBuilderUpdates:(id)a0;
- (void)recomputeAssistantIdentifier;
- (void)removeActionSet:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateName:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateName:(id)a0 configuredName:(id)a1 completionHandler:(id /* block */)a2;

@end

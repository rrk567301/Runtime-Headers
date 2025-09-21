@class NSObject, NSUUID, _HMContext, HMAccessory, NSArray, NSString, HMHome;
@protocol OS_dispatch_queue;

@interface _HMAccessoryProfile : NSObject <HMObjectMerge, HMFMessageReceiver, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _HMContext *context;
@property (readonly, weak, nonatomic) HMAccessory *accessory;
@property (readonly, weak, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier;
@property (readonly, nonatomic) NSArray *services;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

- (void)encodeWithCoder:(id)a0;
- (id)assistantIdentifier;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)a0 accessory:(id)a1;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)handleRuntimeStateUpdate:(id)a0;
- (id)initWithUUID:(id)a0 services:(id)a1;
- (BOOL)mergeFromNewObject:(id)a0;

@end

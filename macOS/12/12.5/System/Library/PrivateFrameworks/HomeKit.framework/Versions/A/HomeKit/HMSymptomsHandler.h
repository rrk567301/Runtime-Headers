@class HMFUnfairLock, NSUUID, _HMContext, HMMutableArray, NSSet, NSObject, NSString;
@protocol OS_dispatch_queue, HMSymptomsHandlerDelegate;

@interface HMSymptomsHandler : NSObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMObjectMerge> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _HMContext *context;
@property (retain, nonatomic) NSUUID *accessoryUUID;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) HMMutableArray *currentSymptoms;
@property (copy, setter=setSFDeviceIdentifier:) NSUUID *sfDeviceIdentifier;
@property (readonly, copy) NSSet *symptoms;
@property (weak) id<HMSymptomsHandlerDelegate> delegate;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;

+ (id)logCategory;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (id)logIdentifier;
- (void)_unconfigure;
- (BOOL)_mergeWithNewObject:(id)a0;
- (void)_unconfigureContext;
- (void)__configureWithContext:(id)a0;
- (void)_registerForMessages;
- (void)_handleSymptomsUpdated:(id)a0;
- (void)_handleSFDeviceIdentifierUpdated:(id)a0;
- (void)_callSymptomsUpdatedDelegate:(id)a0;
- (void)_callFixSessionAvailabilityUpdatedDelegate;
- (void)initiateFixWithCompletionHandler:(id /* block */)a0;

@end

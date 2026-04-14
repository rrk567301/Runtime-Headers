@class HMFActivity, HMDUser, HMDHome, NSNumber, HMFMessage;

@interface HMDHAPAccessoryTaskContext : NSObject

@property (readonly) NSNumber *identifier;
@property (readonly) long long operationType;
@property (readonly, weak) HMDHome *home;
@property (readonly) HMFMessage *requestMessage;
@property (readonly) unsigned long long sourceType;
@property (retain, nonatomic) HMFActivity *activity;
@property (readonly) HMDUser *user;
@property (readonly) BOOL supportsMultiPartResponse;

- (void).cxx_destruct;
- (BOOL)isComplete;
- (long long)qualityOfService;
- (id)workQueue;
- (id)operationName;
- (id)clientBundleIdentifier;
- (id)homeUniqueIdentifier;
- (BOOL)isRemoteAccessDeviceReachable;
- (id)requestMessageName;
- (id)initWithIdentifier:(id)a0 operationType:(long long)a1 home:(id)a2 sourceType:(unsigned long long)a3 requestMessage:(id)a4 name:(id)a5;
- (id)homeMessageDestination;
- (id)requestMessageIdentifier;
- (BOOL)isShortActionOperation;
- (void)dispatchMessage:(id)a0 delegateDevice:(id)a1;
- (id)residentMapForAccessories:(id)a0;

@end

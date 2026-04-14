@class HMFActivity, HMDUser, HMDHome, NSNumber, HMFMessage;

@interface HMDHAPAccessoryTaskContext : NSObject

@property (readonly) NSNumber *identifier;
@property (readonly) long long operationType;
@property (readonly, weak) HMDHome *home;
@property (readonly) HMFMessage *requestMessage;
@property (readonly) unsigned long long sourceType;
@property (readonly) unsigned long long biomeSource;
@property (retain, nonatomic) HMFActivity *activity;
@property (readonly) HMDUser *user;
@property (readonly) BOOL supportsMultiPartResponse;

- (id)workQueue;
- (long long)qualityOfService;
- (id)clientIdentifier;
- (id)operationName;
- (BOOL)isComplete;
- (void).cxx_destruct;
- (id)homeUniqueIdentifier;
- (void)dispatchMessage:(id)a0 delegateDevice:(id)a1;
- (id)homeMessageDestination;
- (id)initWithIdentifier:(id)a0 operationType:(long long)a1 home:(id)a2 sourceType:(unsigned long long)a3 biomeSource:(unsigned long long)a4 requestMessage:(id)a5 name:(id)a6;
- (BOOL)isRemoteAccessDeviceReachable;
- (BOOL)isShortActionOperation;
- (id)requestMessageIdentifier;
- (id)requestMessageName;

@end

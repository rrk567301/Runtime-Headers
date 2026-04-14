@class HMFLogEventSessionVoucher, NSUUID, NSString;
@protocol HMFLogBackendSession;

@interface HMFLogEventSession : NSObject <HMFLogging>

@property (readonly, nonatomic) id<HMFLogBackendSession> backend;
@property (readonly, nonatomic) HMFLogEventSessionVoucher *voucher;
@property (readonly, nonatomic) unsigned long long signpostId;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *rootUUID;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)backendWithServiceName:(id)a0 samplingUUID:(id)a1 uploadImmediately:(BOOL)a2;
+ (void)submitEventWithName:(id)a0 serviceName:(id)a1 uploadImmediately:(BOOL)a2 payload:(id)a3;
+ (void)submitEventWithName:(id)a0 serviceName:(id)a1 payload:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 backend:(id)a1;
- (id)initWithUUID:(id)a0 serviceName:(id)a1 uploadImmediately:(BOOL)a2;
- (void)submitEventWithName:(id)a0 payload:(id)a1;

@end

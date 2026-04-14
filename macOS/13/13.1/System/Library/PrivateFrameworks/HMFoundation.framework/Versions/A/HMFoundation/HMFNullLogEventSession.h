@class NSUUID, NSString, HMFLogEventSessionVoucher;

@interface HMFNullLogEventSession : HMFObject <HMFLogEventSession>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) HMFLogEventSessionVoucher *voucher;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 serviceName:(id)a1;
- (void)submitEventWithName:(id)a0 payload:(id)a1;

@end

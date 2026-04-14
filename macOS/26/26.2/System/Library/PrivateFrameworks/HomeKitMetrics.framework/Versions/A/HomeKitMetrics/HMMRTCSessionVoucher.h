@class NSString, NSUUID;

@interface HMMRTCSessionVoucher : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSUUID *uuid;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 serviceName:(id)a1;

@end

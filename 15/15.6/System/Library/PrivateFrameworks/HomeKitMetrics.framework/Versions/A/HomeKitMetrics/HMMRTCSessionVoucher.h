@class NSString, NSUUID;

@interface HMMRTCSessionVoucher : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 serviceName:(id)a1;

@end

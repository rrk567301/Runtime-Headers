@class HMDResidentUser;

@interface __HMDLegacyResidentUser : HMDUser

@property (readonly, nonatomic) HMDResidentUser *residentUser;

+ (void)initialize;
+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isRemoteGateway;
- (id)initWithResidentUser:(id)a0;

@end

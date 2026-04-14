@class HMDResidentUser;

@interface __HMDLegacyResidentUser : HMDUser

@property (readonly, nonatomic) HMDResidentUser *residentUser;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isRemoteGateway;
- (id)initWithResidentUser:(id)a0;

@end

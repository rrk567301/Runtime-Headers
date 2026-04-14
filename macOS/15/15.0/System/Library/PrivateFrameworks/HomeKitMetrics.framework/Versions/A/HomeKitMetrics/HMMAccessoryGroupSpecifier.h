@class NSUUID;

@interface HMMAccessoryGroupSpecifier : HMMHomeGroupSpecifier

@property (readonly, nonatomic) NSUUID *accessoryUUID;

+ (id)type;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)descriptor;
- (id)coreDataGroupUsingContext:(id)a0;
- (id)initWithAccessoryUUID:(id)a0 homeUUID:(id)a1 groupName:(id)a2;
- (BOOL)isEqualToAccessoryGroupSpecifier:(id)a0;

@end

@class NSUUID;

@interface HMMHomeGroupSpecifier : HMMNamedGroupSpecifier

@property (readonly, nonatomic) NSUUID *homeUUID;

+ (id)type;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)descriptor;
- (id)coreDataGroupUsingContext:(id)a0;
- (id)initWithHomeUUID:(id)a0 groupName:(id)a1;
- (BOOL)isEqualToHomeGroupSpecifier:(id)a0;

@end

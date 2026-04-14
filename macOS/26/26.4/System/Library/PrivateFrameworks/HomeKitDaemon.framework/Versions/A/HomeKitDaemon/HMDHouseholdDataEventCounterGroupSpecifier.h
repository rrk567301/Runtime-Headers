@class NSUUID;

@interface HMDHouseholdDataEventCounterGroupSpecifier : HMDDateCounterGroupSpecifier

@property (readonly, nonatomic) NSUUID *homeUUID;

+ (id)specifierWithGroupName:(id)a0 homeUUID:(id)a1 date:(id)a2;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithGroupName:(id)a0 homeUUID:(id)a1 date:(id)a2;

@end

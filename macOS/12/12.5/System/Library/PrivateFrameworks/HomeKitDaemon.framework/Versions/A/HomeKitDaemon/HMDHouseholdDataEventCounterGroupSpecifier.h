@class NSString, NSUUID, NSDate;

@interface HMDHouseholdDataEventCounterGroupSpecifier : NSObject <HMDEventCounterGroupSpecifying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specifierWithGroupName:(id)a0 homeUUID:(id)a1 date:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithGroupName:(id)a0 homeUUID:(id)a1 date:(id)a2;

@end

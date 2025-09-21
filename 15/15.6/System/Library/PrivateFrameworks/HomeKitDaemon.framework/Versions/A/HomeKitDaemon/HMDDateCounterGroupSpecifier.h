@class NSDate;

@interface HMDDateCounterGroupSpecifier : HMDEventCounterGroupNameSpecifier

@property (readonly, nonatomic) NSDate *date;

+ (char)supportsSecureCoding;
+ (id)specifierWithGroupName:(id)a0 date:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupName:(id)a0 date:(id)a1;

@end

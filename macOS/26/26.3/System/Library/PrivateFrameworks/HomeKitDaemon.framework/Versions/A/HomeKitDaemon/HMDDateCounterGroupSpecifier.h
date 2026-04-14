@class NSDate;

@interface HMDDateCounterGroupSpecifier : HMDEventCounterGroupNameSpecifier

@property (readonly, nonatomic) NSDate *date;

+ (id)specifierWithGroupName:(id)a0 date:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithGroupName:(id)a0 date:(id)a1;

@end

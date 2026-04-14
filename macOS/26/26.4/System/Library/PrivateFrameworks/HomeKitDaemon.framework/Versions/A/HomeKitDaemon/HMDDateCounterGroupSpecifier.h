@class NSDate;

@interface HMDDateCounterGroupSpecifier : HMDEventCounterGroupNameSpecifier

@property (readonly, nonatomic) NSDate *date;

+ (id)specifierWithGroupName:(id)a0 date:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithGroupName:(id)a0 date:(id)a1;

@end

@interface ATXDailyOverviewOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long focusFilter;
@property (readonly, nonatomic) char isModernDashboardLayout;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFocusFilter:(long long)a0 isModernDashboardLayout:(char)a1;
- (char)isEqualToATXDailyOverviewOptions:(id)a0;

@end

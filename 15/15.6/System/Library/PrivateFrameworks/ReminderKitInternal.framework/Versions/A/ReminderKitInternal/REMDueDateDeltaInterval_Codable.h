@interface REMDueDateDeltaInterval_Codable : REMDueDateDeltaInterval

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithUnit:(long long)a0 count:(long long)a1;
- (id)initWithUnitInteger:(long long)a0 count:(long long)a1;

@end

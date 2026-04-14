@interface CalStoreRemoteCALWeekDayNumber : CalStoreRemoteObject

@property (nonatomic) unsigned long long day;
@property (nonatomic) long long number;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

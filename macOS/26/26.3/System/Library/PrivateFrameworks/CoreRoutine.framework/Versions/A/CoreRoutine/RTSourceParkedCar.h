@class NSString, NSDate;

@interface RTSourceParkedCar : RTSource

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *parkDate;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 parkDate:(id)a1;

@end

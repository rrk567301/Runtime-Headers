@class NSString, NSDate;

@interface RTSourceParkedCar : RTSource

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *parkDate;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithIdentifier:(id)a0 parkDate:(id)a1;

@end

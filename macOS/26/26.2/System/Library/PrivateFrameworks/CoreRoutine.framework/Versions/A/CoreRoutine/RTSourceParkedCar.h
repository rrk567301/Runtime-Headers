@class NSString, NSDate;

@interface RTSourceParkedCar : RTSource

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *parkDate;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)a0 parkDate:(id)a1;

@end

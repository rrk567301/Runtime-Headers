@class NSString, NSDate;

@interface RTSourceParkedCar : RTSource

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *parkDate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 parkDate:(id)a1;

@end

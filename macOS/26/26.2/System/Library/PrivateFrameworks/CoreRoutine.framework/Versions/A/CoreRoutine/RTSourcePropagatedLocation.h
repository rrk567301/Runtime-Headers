@class NSDate;

@interface RTSourcePropagatedLocation : RTSource

@property (readonly, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

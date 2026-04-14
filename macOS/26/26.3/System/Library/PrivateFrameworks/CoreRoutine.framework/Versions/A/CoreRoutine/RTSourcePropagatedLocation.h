@class NSDate;

@interface RTSourcePropagatedLocation : RTSource

@property (readonly, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end

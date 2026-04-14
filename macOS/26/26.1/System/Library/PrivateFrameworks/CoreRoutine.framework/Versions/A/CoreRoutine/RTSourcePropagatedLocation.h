@class NSDate;

@interface RTSourcePropagatedLocation : RTSource

@property (readonly, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (id)initWithDate:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end

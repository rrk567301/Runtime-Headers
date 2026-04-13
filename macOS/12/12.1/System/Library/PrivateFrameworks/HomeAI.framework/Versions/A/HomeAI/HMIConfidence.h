@class NSArray;

@interface HMIConfidence : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *levelThresholds;
@property (readonly) long long level;
@property (readonly) double value;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)initWithValue:(double)a0 levelThresholds:(id)a1;

@end

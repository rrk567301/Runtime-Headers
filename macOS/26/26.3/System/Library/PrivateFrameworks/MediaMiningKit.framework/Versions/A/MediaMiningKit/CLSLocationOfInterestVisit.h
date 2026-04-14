@class NSUUID, CLSLocationOfInterest, NSDateInterval;

@interface CLSLocationOfInterestVisit : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDateInterval *visitInterval;
@property (readonly, nonatomic) double confidence;
@property (weak, nonatomic) CLSLocationOfInterest *locationOfInterest;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 visitInterval:(id)a1 confidence:(double)a2;
- (BOOL)isHighConfidence;

@end

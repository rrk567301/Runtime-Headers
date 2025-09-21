@interface SMSessionDestinationEta : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double expectedTravelTime;
@property (readonly, nonatomic) double additionalTravelTime;
@property (readonly, nonatomic) unsigned long long transportType;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)etaDate;
- (id)coarseEtaDate;
- (id)initWithExpectedTravelTime:(double)a0 additionalTravelTime:(double)a1 transportType:(unsigned long long)a2;
- (id)outputToDictionary;

@end

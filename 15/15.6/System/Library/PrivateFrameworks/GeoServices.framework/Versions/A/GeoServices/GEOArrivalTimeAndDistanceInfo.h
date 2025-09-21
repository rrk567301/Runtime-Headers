@class NSArray;

@interface GEOArrivalTimeAndDistanceInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *arrivalTimeInfo;
@property (nonatomic) double distanceRemainingToEndOfLeg;
@property (nonatomic) double distanceRemainingToEndOfRoute;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

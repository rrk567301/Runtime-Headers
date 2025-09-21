@class NSString, NSNumber;

@interface PLRevGeoMapItemAdditionalPlaceInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSNumber *placeType;
@property (readonly, nonatomic) unsigned long long dominantOrderType;
@property (readonly, nonatomic) double areaInSquareMeters;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 placeType:(id)a1 dominantOrderType:(unsigned long long)a2 areaInSquareMeters:(double)a3;

@end

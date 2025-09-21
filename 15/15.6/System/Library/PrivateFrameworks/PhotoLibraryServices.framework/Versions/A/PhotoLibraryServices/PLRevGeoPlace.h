@class NSDictionary;

@interface PLRevGeoPlace : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *placeInfosForOrderType;

+ (unsigned long long)_dominantOrderTypeForPlaceType:(id)a0 lastOrderType:(unsigned long long)a1;
+ (id)_newFilterSortedPlaceInfos:(id)a0 usingPlaceAnnotation:(id)a1 outFoundOrderType:(unsigned long long *)a2 outPreviousOrderType:(unsigned long long *)a3;
+ (id)placeWithMapItem:(id)a0 placeAnnotation:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlaceInfosForOrderType:(id)a0;
- (id)bestPlaceInfoForOrderType:(unsigned long long)a0;

@end

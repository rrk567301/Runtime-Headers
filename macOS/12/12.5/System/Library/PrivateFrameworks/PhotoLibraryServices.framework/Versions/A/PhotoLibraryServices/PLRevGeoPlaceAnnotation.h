@class NSString;

@interface PLRevGeoPlaceAnnotation : NSObject <NSCopying>

@property (nonatomic) int placeLevel;
@property (retain, nonatomic) NSString *placeName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end

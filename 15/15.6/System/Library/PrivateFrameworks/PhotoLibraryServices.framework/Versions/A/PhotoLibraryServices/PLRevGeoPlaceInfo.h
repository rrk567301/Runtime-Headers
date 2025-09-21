@class NSString;

@interface PLRevGeoPlaceInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *placeName;
@property (readonly, nonatomic) char hasArea;
@property (readonly, nonatomic) double minimumArea;
@property (readonly, nonatomic) double maximumArea;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addPlaceInfoArea:(double)a0;
- (id)initWithPlaceName:(id)a0;

@end

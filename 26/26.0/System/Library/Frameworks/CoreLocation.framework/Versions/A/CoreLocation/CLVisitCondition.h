@interface CLVisitCondition : CLCondition <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long poiCategory;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double radius;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_initWithPoiCategory:(long long)a0 latitude:(double)a1 longitude:(double)a2 radius:(double)a3;
- (id)initWithPOICategory:(long long)a0;

@end

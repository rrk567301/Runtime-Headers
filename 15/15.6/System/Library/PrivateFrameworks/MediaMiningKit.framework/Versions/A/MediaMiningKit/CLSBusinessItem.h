@class NSString, CLCircularRegion, NSArray;

@interface CLSBusinessItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *isoCountryCode;
@property (copy, nonatomic) NSString *geoServiceProvider;
@property (nonatomic) char cached;
@property (retain, nonatomic) CLCircularRegion *region;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) long long venueCapacity;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *businessCategories;
@property (readonly, nonatomic) char isEnriched;

+ (id)_businessCategoriesFromGeoMapItems:(id)a0;
+ (double)_defaultRadiusForCategories:(id)a0;
+ (id)_regionFromMapItem:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 region:(id)a1 categories:(id)a2;
- (id)initFromMapItem:(id)a0 isoCountryCode:(id)a1 categoryOnly:(char)a2;

@end

@class NSString, MRStaticRouteBannerRequest;

@interface MRRouteBannerRequest : MRBaseBannerRequest

@property (retain, nonatomic) NSString *routeIdentifier;
@property (nonatomic) unsigned long long bannerType;
@property (retain, nonatomic) MRStaticRouteBannerRequest *staticRequest;

+ (char)supportsSecureCoding;
+ (id)requestWithStaticRequest:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRouteIdentifier:(id)a0 staticRequest:(id)a1;

@end

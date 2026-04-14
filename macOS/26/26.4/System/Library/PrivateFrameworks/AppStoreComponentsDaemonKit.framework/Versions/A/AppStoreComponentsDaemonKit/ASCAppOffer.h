@class NSString, NSDictionary, NSURL, NSArray, NSNumber, ASCAdamID;

@interface ASCAppOffer : NSObject <ASCOffer, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *baseBuyParams;
@property (readonly, copy, nonatomic) NSString *metricsBuyParams;
@property (readonly, copy, nonatomic) NSDictionary *metricsOverlay;
@property (readonly, copy, nonatomic) NSDictionary *additionalHeaders;
@property (readonly, copy, nonatomic) NSURL *preflightPackageURL;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *itemName;
@property (readonly, copy, nonatomic) NSString *vendorName;
@property (readonly, copy, nonatomic) NSArray *capabilities;
@property (readonly, copy, nonatomic) ASCAdamID *id;
@property (readonly, copy, nonatomic) NSDictionary *titles;
@property (readonly, copy, nonatomic) NSDictionary *subtitles;
@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) NSNumber *ageRating;
@property (readonly, nonatomic) NSArray *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithID:(id)a0 titles:(id)a1 subtitles:(id)a2 flags:(long long)a3 ageRating:(id)a4 metrics:(id)a5 baseBuyParams:(id)a6 metricsBuyParams:(id)a7 metricsOverlay:(id)a8 additionalHeaders:(id)a9 preflightPackageURL:(id)a10 bundleID:(id)a11 itemName:(id)a12 vendorName:(id)a13 capabilities:(id)a14;
- (id)offerWithMetrics:(id)a0;

@end

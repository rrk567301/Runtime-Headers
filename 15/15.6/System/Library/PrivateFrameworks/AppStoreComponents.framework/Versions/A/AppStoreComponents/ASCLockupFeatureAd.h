@class NSString;

@interface ASCLockupFeatureAd : NSObject <ASCLockupFeature>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isEditorsChoice;
@property (readonly, nonatomic) float productRating;
@property (readonly, copy, nonatomic) NSString *productRatingBadge;
@property (readonly, copy, nonatomic) NSString *productDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEditorsChoice:(char)a0 productRating:(float)a1 productRatingBadge:(id)a2 productDescription:(id)a3;

@end

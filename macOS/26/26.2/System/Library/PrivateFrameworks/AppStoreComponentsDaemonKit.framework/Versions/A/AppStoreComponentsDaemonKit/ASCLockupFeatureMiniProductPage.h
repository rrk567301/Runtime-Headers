@class NSString, ASCArtwork;

@interface ASCLockupFeatureMiniProductPage : NSObject <ASCLockupFeature>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *productPageMetadata;
@property (readonly, copy, nonatomic) NSString *productPageDescription;
@property (readonly, copy, nonatomic) ASCArtwork *ageRatingPictogram;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 description:(id)a1 ageRatingPictogram:(id)a2;

@end

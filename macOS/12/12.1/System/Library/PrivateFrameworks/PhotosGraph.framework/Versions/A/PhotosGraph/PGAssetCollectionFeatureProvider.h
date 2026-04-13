@class NSArray;

@interface PGAssetCollectionFeatureProvider : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *featureSpecifications;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFeatureSpecifications:(id)a0;
- (id)allFeatureSpecificationsApplicableToMomentNode:(id)a0 atMomentIngest:(BOOL)a1;

@end

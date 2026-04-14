@class PKImage;

@interface PKPassPersonalizationImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *logoImage;

+ (BOOL)supportsSecureCoding;
+ (BOOL)shouldCache;
+ (long long)imageSetType;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (void)preheatImages;

@end

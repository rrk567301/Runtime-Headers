@class PKImage;

@interface PKPassPlaceHolderImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *placeHolderImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } logoRect;

+ (BOOL)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (long long)imageSetType;
+ (id)archiveName;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (void)preheatImages;
- (id)_initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3 frontFaceImageSet:(id)a4;

@end

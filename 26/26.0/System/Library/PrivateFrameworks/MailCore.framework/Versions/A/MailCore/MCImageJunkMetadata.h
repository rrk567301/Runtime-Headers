@interface MCImageJunkMetadata : NSObject {
    unsigned long long _pixelCount;
    unsigned long long _byteCount;
}

@property (nonatomic) long long type;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) unsigned long long frameCount;
@property (nonatomic) unsigned long long pixelCount;
@property (nonatomic) unsigned long long byteCount;
@property (nonatomic) double density;
@property (nonatomic) BOOL isAnimated;
@property (readonly, nonatomic) long long sizeCategory;
@property (readonly, nonatomic) long long densityCategory;

+ (id)lsmMarkerForImageDensityCategory:(long long)a0;
+ (id)lsmMarkerForImageSizeCategory:(long long)a0;
+ (id)stringForImageType:(long long)a0;

- (id)init;
- (id)description;
- (id)initWithImage:(id)a0 name:(id)a1 type:(long long)a2;
- (void)_computeDensity;

@end

@interface PFParallaxLayoutConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double width; double height; } screenSize;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } timeRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inactiveTimeRect;
@property (readonly, nonatomic) struct CGSize { double width; double height; } parallaxPadding;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unsafeRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } timeOverlapCheckTop;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } timeOverlapCheckBottom;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } parallaxPaddingPct;
@property (readonly, nonatomic) BOOL isPortrait;

+ (id)deviceConfigurationForOrientation:(long long)a0;
+ (id)_fallbackTimeRectCollectionForSBSFetchingFailureWithOrientation:(long long)a0;
+ (void)_loadDeviceTimeRectCollectionIfNeeded;
+ (id)_timeRectCollectionOverrideForYDownNormalizedEffectiveBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1;
+ (id)bestConfigurationForScreenSize:(struct CGSize { double x0; double x1; })a0 screenScale:(double)a1 orientation:(long long)a2;
+ (id)bestConfigurationForScreenSize:(struct CGSize { double x0; double x1; })a0 screenScale:(double)a1 startingWithConfiguration:(id)a2 orientation:(long long)a3;
+ (id)genericConfigurationForOrientation:(long long)a0;
+ (id)genericPadConfigurationForOrientation:(long long)a0;
+ (id)layoutConfigurationFromDictionary:(id)a0 error:(id *)a1;
+ (id)timeRectCollectionLandscape;
+ (id)timeRectCollectionPortrait;

- (id)debugDescription;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })timeOverlapCheckTopForTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })a0 screenScale:(double)a1 denormalizedYDownTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 parallaxPadding:(struct CGSize { double x0; double x1; })a3;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })a0 screenScale:(double)a1 normalizedTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 parallaxPadding:(struct CGSize { double x0; double x1; })a3;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })a0 screenScale:(double)a1 normalizedYDownTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 parallaxPadding:(struct CGSize { double x0; double x1; })a3;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })a0 screenScale:(double)a1 timeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inactiveTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 parallaxPadding:(struct CGSize { double x0; double x1; })a4;
- (id)initWithScreenSize:(struct CGSize { double x0; double x1; })a0 timeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inactiveTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 parallaxPadding:(struct CGSize { double x0; double x1; })a3;
- (BOOL)isEqualToLayoutConfiguration:(id)a0;
- (double)maxStrechAmountNormalized;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stretchedTimeOverlapCheckBottom:(double)a0 visibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stretchedTimeOverlapCheckTop:(double)a0 visibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })timeOverlapCheckBottomForTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })timeRectForNormalizedHeight:(double)a0;

@end

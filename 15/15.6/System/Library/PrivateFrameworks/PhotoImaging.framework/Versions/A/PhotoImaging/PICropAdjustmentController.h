@class NSString;

@interface PICropAdjustmentController : PIAdjustmentController

@property (class, readonly, nonatomic) NSString *xOriginKey;
@property (class, readonly, nonatomic) NSString *yOriginKey;
@property (class, readonly, nonatomic) NSString *widthKey;
@property (class, readonly, nonatomic) NSString *heightKey;
@property (class, readonly, nonatomic) NSString *constraintWidthKey;
@property (class, readonly, nonatomic) NSString *constraintHeightKey;
@property (class, readonly, nonatomic) NSString *angleKey;
@property (class, readonly, nonatomic) NSString *pitchKey;
@property (class, readonly, nonatomic) NSString *yawKey;

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRect;
@property (nonatomic) long long constraintWidth;
@property (nonatomic) long long constraintHeight;
@property (nonatomic) double angle;
@property (nonatomic) double angleRadians;
@property (nonatomic) double pitch;
@property (nonatomic) double pitchRadians;
@property (nonatomic) double yaw;
@property (nonatomic) double yawRadians;

- (id)initWithAdjustment:(id)a0;
- (char)isGeometryIdentityForImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)visualInputKeys;
- (void)setAutoCropped:(char)a0;
- (char)isCropConstrained;
- (char)isCropIdentityForImageSize:(struct CGSize { double x0; double x1; })a0;
- (char)isSettingEqual:(id)a0 forKey:(id)a1;
- (id)pasteKeysForMediaType:(long long)a0;

@end

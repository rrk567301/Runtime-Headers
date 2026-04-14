@interface PICropAdjustmentController : PIAdjustmentController

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRect;
@property (nonatomic) long long constraintWidth;
@property (nonatomic) long long constraintHeight;
@property (nonatomic) double angle;
@property (nonatomic) double angleRadians;
@property (nonatomic) double pitch;
@property (nonatomic) double pitchRadians;
@property (nonatomic) double yaw;
@property (nonatomic) double yawRadians;
@property (nonatomic) BOOL autoCropped;
@property (nonatomic, getter=isSmart) BOOL smart;
@property (nonatomic, getter=isOriginalCrop) BOOL originalCrop;

+ (id)angleKey;
+ (id)pitchKey;
+ (id)yawKey;
+ (id)xOriginKey;
+ (id)yOriginKey;
+ (id)widthKey;
+ (id)heightKey;
+ (id)constraintWidthKey;
+ (id)constraintHeightKey;
+ (id)smartKey;
+ (id)originalCropKey;

- (id)initWithAdjustment:(id)a0;
- (BOOL)isSettingEqual:(id)a0 forKey:(id)a1;
- (id)visualInputKeys;
- (BOOL)isCropIdentityForImageSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isCropConstrained;
- (BOOL)isGeometryIdentityForImageSize:(struct CGSize { double x0; double x1; })a0;

@end

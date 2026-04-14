@interface DGLivePhotoKeyFrameOperation : DGOperation

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;

+ (id)inputKeys;
+ (id)attributes;
+ (id)outputKeys;

- (id)settingsDictionary;
- (id)initWithOperation:(id)a0;
- (BOOL)isMigratable;
- (BOOL)changesGeometry;
- (BOOL)applySettingsDictionary:(id)a0;
- (unsigned long long)geometryHash;
- (BOOL)isGeometricallyHashEquivalent:(id)a0;

@end

@interface DGLivePhotoKeyFrameOperation : DGOperation

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;

- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (char)isMigratable;
- (char)changesGeometry;
- (char)applySettingsDictionary:(id)a0;
- (unsigned long long)geometryHash;
- (char)isGeometricallyHashEquivalent:(id)a0;

@end

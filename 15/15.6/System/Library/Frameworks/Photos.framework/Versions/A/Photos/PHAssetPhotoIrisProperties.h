@interface PHAssetPhotoIrisProperties : PHAssetPropertySet

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } photoIrisStillDisplayTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } photoIrisVideoDuration;
@property (readonly, nonatomic) unsigned short photoIrisVisibilityState;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;

@end

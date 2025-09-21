@interface PHAssetCameraCaptureDeviceProperties : PHAssetPropertySet

@property (readonly, nonatomic) char isSelfie;

+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;

@end

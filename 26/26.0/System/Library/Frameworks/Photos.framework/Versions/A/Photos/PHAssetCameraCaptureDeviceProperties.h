@interface PHAssetCameraCaptureDeviceProperties : PHAssetPropertySet

@property (readonly, nonatomic) BOOL isSelfie;
@property (readonly, nonatomic) BOOL isFrontRear;

+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end

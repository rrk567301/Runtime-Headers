@class NSString, NSDictionary, CLLocationManager, PLPhotoLibrary, NSMutableArray;

@interface PLLocationController : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
    NSMutableArray *_locationPendingAssets;
    NSDictionary *_exifDictionary;
    NSString *_locationStr;
    char _isEnabled;
    char _isUpdating;
    char _isHeadingEnabled;
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setUsesEffectiveBundleIdentifier:(char)a0;
+ (char)usesEffectiveBundleIdentifier;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(char)a0;
- (id)location;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)setHeadingEnabled:(char)a0;
- (id)photoLibrary;
- (id)locationString;
- (char)_addLocationToAsset:(id)a0;
- (void)_applicationStateChanged:(id)a0;
- (void)_assetContainerChanged:(id)a0;
- (void)_startUpdating;
- (void)_stopUpdating;
- (void)_updateLocationRunState;
- (void)_updatePendingAssets;
- (void)addLocationToMediaWithAssetURLWhenAvailable:(id)a0 deviceOrientation:(int)a1 cameraWasRearFacing:(char)a2;
- (id)locationDictionaryForImageWithDeviceOrientation:(int)a0 rearFacingCamera:(char)a1;

@end

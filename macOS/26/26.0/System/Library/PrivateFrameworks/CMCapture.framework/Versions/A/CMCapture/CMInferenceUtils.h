@class NSArray, NSRegularExpression, NSString;

@interface CMInferenceUtils : NSObject {
    NSArray *_networksV1;
    NSArray *_networksV2;
    NSRegularExpression *_platformRegExpPatternV1;
    NSRegularExpression *_platformRegExpPatternV2;
    NSString *_imagingNetworksPath;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_getNetworkPath:(id)a0 isE5:(BOOL)a1 fsNetworks:(id)a2;
- (id)availableImagingNetworksWithExtension:(id)a0;
- (id)getNetworkPath:(id)a0 isE5:(BOOL)a1;

@end

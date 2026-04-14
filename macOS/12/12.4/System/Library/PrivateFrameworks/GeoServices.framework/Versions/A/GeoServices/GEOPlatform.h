@interface GEOPlatform : NSObject

+ (id)sharedPlatform;
+ (BOOL)isRunningInGeod;
+ (void)setIsRunningInGeod:(BOOL)a0;

- (id)init;
- (id)productName;
- (BOOL)isInternalInstall;
- (id)buildVersion;
- (id)osVersion;
- (BOOL)supportsNavigation;
- (id)clientCapabilities;
- (id)hardwareClass;
- (id)hardwareIdentifier;
- (BOOL)supportsAdvancedMap;
- (id)hardwareModel;
- (id)osAndBuildVersion;
- (id)_systemInfoDictionary;
- (BOOL)mapsFeatureFreedomEnabled;
- (BOOL)supportsRealisticTiles;
- (BOOL)supportsForceTouch;
- (BOOL)isCellDataPossible;
- (long long)deviceScreenWidthInPixels;
- (long long)deviceScreenHeightInPixels;
- (double)deviceScreenScale;

@end

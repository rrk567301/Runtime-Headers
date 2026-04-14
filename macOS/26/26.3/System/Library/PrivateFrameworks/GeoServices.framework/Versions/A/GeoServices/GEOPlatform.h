@interface GEOPlatform : NSObject

+ (id)sharedPlatform;
+ (void)setIsRunningInGeoAPd:(BOOL)a0;
+ (void)setIsRunningInGeod:(BOOL)a0;
+ (BOOL)isRunningInGeod;
+ (BOOL)isRunningInGeoAPd;

- (id)osVersion;
- (id)clientCapabilities;
- (BOOL)isInternalInstall;
- (BOOL)supportsASTC;
- (id)hardwareClass;
- (BOOL)supportsAdvancedMap;
- (BOOL)supportsMultiUser;
- (id)buildVersion;
- (id)productName;
- (id)osAndBuildVersion;
- (long long)deviceScreenWidthInPixels;
- (BOOL)isCellDataPossible;
- (id)init;
- (BOOL)isMacSetupUser;
- (BOOL)supportsForceTouch;
- (id)hardwareIdentifier;
- (BOOL)supportsNavigation;
- (id)deviceCountrySKU;
- (void)setClientCapabilitiesHardwareIdentifier:(id)a0;
- (id)deviceCountrySKUForServiceRequests;
- (BOOL)isGUIUser;
- (long long)deviceScreenHeightInPixels;
- (BOOL)supportsRealisticTiles;
- (BOOL)shouldPrefetchVisualResources;
- (double)deviceScreenScale;
- (BOOL)hasCellularRadio;
- (BOOL)mapsFeatureFreedomEnabled;

@end

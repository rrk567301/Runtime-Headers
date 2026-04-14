@interface ISPlatformInfo : IFPlatformInfo

+ (id)sharedInstance;

- (BOOL)_platform:(unsigned long long)a0 withinAllowedPlatforms:(id)a1 allowNative:(BOOL)a2;
- (BOOL)supportsRequestingIconStacksForPlatform:(unsigned long long)a0;
- (BOOL)supportsRequestingLayerStacksForPlatform:(unsigned long long)a0;
- (BOOL)supportsRequestingMultisizedImagesForPlatform:(unsigned long long)a0;

@end

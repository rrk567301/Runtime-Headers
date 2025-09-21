@interface ISPlatformInfo : IFPlatformInfo

+ (id)sharedInstance;

- (char)supportsRequestingLayerStacksForPlatform:(unsigned long long)a0;
- (char)supportsRequestingMultisizedImagesForPlatform:(unsigned long long)a0;

@end

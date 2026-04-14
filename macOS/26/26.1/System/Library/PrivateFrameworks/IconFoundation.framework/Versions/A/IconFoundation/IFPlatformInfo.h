@interface IFPlatformInfo : NSObject

@property (readonly) unsigned long long nativePlatform;

+ (id)sharedInstance;

- (id)iconPlatformStringFromPlatform:(unsigned long long)a0;
- (unsigned long long)platformFromPlatformStrings:(id)a0;
- (unsigned long long)platformFromUIDeviceFamily:(id)a0;

@end

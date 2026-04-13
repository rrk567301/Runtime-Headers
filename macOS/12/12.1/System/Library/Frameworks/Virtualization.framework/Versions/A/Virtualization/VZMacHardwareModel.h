@class NSData;

@interface VZMacHardwareModel : NSObject <NSCopying> {
    struct { long long majorVersion; long long minorVersion; long long patchVersion; } _minimumSupportedHostOSVersion;
    unsigned int _boardID;
    const struct PlatformConfiguration { unsigned int x0; unsigned int x1; struct { long long x0; long long x1; long long x2; } x2; int x3; } *_defaultPlatformConfiguration;
    unsigned int _platformVersion;
}

@property (readonly, copy) NSData *dataRepresentation;
@property (readonly, getter=isSupported) BOOL supported;

+ (id)_hardwareModelWithPlatformVersion:(unsigned int)a0;
+ (id)_hardwareModelWithPlatformVersion:(unsigned int)a0 boardID:(unsigned int)a1;
+ (id)_defaultHardwareModel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDataRepresentation:(id)a0;
- (unsigned int)_boardID;
- (struct { long long x0; long long x1; long long x2; })_minimumSupportedHostOSVersion;

@end

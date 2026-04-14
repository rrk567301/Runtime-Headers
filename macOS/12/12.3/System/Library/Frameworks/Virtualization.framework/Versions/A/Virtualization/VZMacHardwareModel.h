@class NSData;

@interface VZMacHardwareModel : NSObject <NSCopying> {
    long long _isa;
    struct { long long majorVersion; long long minorVersion; long long patchVersion; } _minimumSupportedHostOSVersion;
    unsigned int _boardID;
    unsigned int _variantID;
    const struct PlatformConfiguration { unsigned int x0; unsigned int x1; struct { long long x0; long long x1; long long x2; } x2; int x3; } *_defaultPlatformConfiguration;
    unsigned int _platformVersion;
}

@property (readonly) long long _isa;
@property (readonly) unsigned int _boardID;
@property (readonly) unsigned int _variantID;
@property (readonly) struct { long long x0; long long x1; long long x2; } _minimumSupportedHostOSVersion;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly, getter=isSupported) BOOL supported;

+ (id)_hardwareModelWithPlatformVersion:(unsigned int)a0 ISA:(long long)a1 boardID:(unsigned int)a2 variantID:(unsigned int)a3;
+ (id)_hardwareModelWithPlatformVersion:(unsigned int)a0 ISA:(long long)a1 variantID:(unsigned int)a2;
+ (id)_defaultHardwareModel;
+ (id)_hardwareModelWithPlatformVersion:(unsigned int)a0;
+ (id)_hardwareModelWithPlatformVersion:(unsigned int)a0 boardID:(unsigned int)a1;
+ (id)_hardwareModelWithPlatformVersion:(unsigned int)a0 boardID:(unsigned int)a1 variantID:(unsigned int)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDataRepresentation:(id)a0;

@end

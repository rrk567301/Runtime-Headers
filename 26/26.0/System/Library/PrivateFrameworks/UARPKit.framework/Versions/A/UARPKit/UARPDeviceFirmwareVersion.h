@class NSString;

@interface UARPDeviceFirmwareVersion : NSObject

@property (readonly) unsigned long long majorVersion;
@property (readonly) unsigned long long minorVersion;
@property (readonly) unsigned long long releaseVersion;
@property (readonly) unsigned long long buildVersion;
@property (readonly) NSString *versionString;

- (BOOL)isValid;
- (id)init;
- (id)description;
- (id)initWithVersionString:(id)a0;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 releaseVersion:(unsigned long long)a2 buildVersion:(unsigned long long)a3;

@end

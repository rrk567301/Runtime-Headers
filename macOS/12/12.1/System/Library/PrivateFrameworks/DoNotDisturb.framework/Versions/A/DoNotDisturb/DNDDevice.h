@interface DNDDevice : NSObject <NSCopying>

@property (readonly) unsigned long long deviceClass;
@property (readonly) unsigned long long deviceCapabilities;

+ (id)currentDevice;
+ (id)deviceWithClass:(unsigned long long)a0 deviceCapabilities:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithClass:(unsigned long long)a0 deviceCapabilities:(unsigned long long)a1;

@end

@class NSString;

@interface DNDSDevice : DNDDevice

@property (readonly, copy) NSString *identifier;

+ (id)currentDevice;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_initWithClass:(unsigned long long)a0 deviceCapabilities:(unsigned long long)a1 identifier:(id)a2 frameworkVersion:(struct { long long x0; long long x1; long long x2; })a3;

@end

@class NSString;

@interface _GCSyntheticDevice : NSObject

@property (readonly) unsigned int service;
@property (readonly) NSString *identifier;

+ (id)devicePropertiesWithDescription:(id)a0;
+ (id)deviceWithService:(unsigned int)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithService:(unsigned int)a0;

@end

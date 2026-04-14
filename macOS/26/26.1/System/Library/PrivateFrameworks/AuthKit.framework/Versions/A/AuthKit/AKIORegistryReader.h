@interface AKIORegistryReader : NSObject

+ (id)sharedInstance;

- (id)sfrManifest;
- (id)copyDeviceTreeInt:(id)a0 key:(id)a1 defaultValue:(int)a2;
- (id)copyDeviceTreeProperty:(id)a0 key:(id)a1;

@end

@class NSString;

@interface IORegistryEmbeddedDeviceTreeAudioInfo : NSObject <EmbeddedDeviceTreeAudioInfo>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void *)createCFTypeRefForKey:(id)a0 atPath:(id)a1 error:(id *)a2;

@end

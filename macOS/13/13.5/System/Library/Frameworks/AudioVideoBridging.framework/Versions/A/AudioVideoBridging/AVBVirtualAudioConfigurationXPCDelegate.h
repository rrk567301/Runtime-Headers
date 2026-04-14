@class AVBVirtualAudioConfiguration;

@interface AVBVirtualAudioConfigurationXPCDelegate : NSObject <AVBAudioConfigurationClient>

@property (nonatomic) AVBVirtualAudioConfiguration *configuration;

- (void)addedBuiltinVirtualEntity:(id)a0;
- (void)addedCustomVirtualEntityWithUID:(id)a0;
- (void)removedBuiltinVirtualEntity:(id)a0;
- (void)removedCustomVirtualEntityWithUID:(id)a0;

@end

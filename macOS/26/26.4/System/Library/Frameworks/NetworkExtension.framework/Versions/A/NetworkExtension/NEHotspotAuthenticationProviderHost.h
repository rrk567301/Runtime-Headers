@class _TtC16NetworkExtension49NEHotspotAuthenticationProviderHostExportedObject;

@interface NEHotspotAuthenticationProviderHost : NEExtensionBaseProviderHost

@property (nonatomic, retain) _TtC16NetworkExtension49NEHotspotAuthenticationProviderHostExportedObject *exportedObject;

- (void).cxx_destruct;
- (id)init;
- (void)cleanupExportedObject;
- (void)initialize:(id)a0;
- (void)startWithCompletion:(void (^)(BOOL))a0;
- (void)stopWithReason:(long long)a0 completion:(void (^)(BOOL))a1;

@end

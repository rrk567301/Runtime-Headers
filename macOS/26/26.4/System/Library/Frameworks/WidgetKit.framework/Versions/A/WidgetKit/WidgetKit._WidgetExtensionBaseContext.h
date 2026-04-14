@interface WidgetKit._WidgetExtensionBaseContext : _EXExtensionContext <EXExtensionContextHostConfigurationProviding>

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (BOOL)_shouldSendHostApplicationStateNotifications;

- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)init;
- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0;

@end

@class _VZCustomMMIODevice;
@protocol _VZCustomMMIODeviceConfigurationDelegate;

@interface _VZCustomMMIODevicePluginBridge : NSObject <_VZPluginBridgeInterface> {
    id<_VZCustomMMIODeviceConfigurationDelegate> _delegate;
    _VZCustomMMIODevice *_device;
}

- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0 personalityDictionary:(id)a1 personalityClass:(Class)a2 connectionDelegate:(id)a3 options:(id)a4;

@end

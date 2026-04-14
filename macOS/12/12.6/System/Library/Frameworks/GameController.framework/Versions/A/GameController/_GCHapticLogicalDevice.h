@class NSMutableArray, _GCHapticClientProxy;
@protocol _GCDriverClientInterface, NSSecureCoding, _GCLogicalDevice, NSObject, NSCopying;

@interface _GCHapticLogicalDevice : NSObject {
    id<_GCLogicalDevice> _logicalDevice;
    id<NSCopying, NSObject, NSSecureCoding> _identifier;
    NSMutableArray *_hapticClients;
    NSMutableArray *_hapticPlayers;
    float _prevSharpness[4];
    float _prevIntensity[4];
    id<_GCDriverClientInterface> _driver;
    _GCHapticClientProxy *_clientConnection;
}

- (void).cxx_destruct;
- (void)unregisterHapticClient:(id)a0;
- (BOOL)hasClients;
- (void)stopAllHaptics;
- (id)initWithIdentifier:(id)a0 clientConnection:(id)a1;
- (void)registerHapticClient:(id)a0;

@end

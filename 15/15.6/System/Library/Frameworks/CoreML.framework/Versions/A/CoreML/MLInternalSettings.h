@interface MLInternalSettings : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property char restrictNeuralNetworksToUseCPUOnly;
@property char restrictNeuralNetworksFromUsingANE;
@property (readonly, nonatomic) char isNeuralNetworkGPUPathForbidden;

+ (char)deviceHasANE;
+ (id)globalSettings;
+ (id)globalSettingsFromSettings:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

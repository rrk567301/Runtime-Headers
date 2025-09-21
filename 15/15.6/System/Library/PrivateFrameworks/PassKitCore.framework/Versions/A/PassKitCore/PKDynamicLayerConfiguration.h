@class PKDynamicLayerCrossDissolveConfiguration, PKDynamicLayerEmitterConfiguration, PKDynamicLayerTransactionEffectConfiguration;

@interface PKDynamicLayerConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isSupported) char supported;
@property (nonatomic) unsigned long long version;
@property (nonatomic) char parallaxEnabled;
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *backgroundParallaxEmitter;
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *neutralEmitter;
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *foregroundParallaxEmitter;
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *staticOverlayEmitter;
@property (retain, nonatomic) PKDynamicLayerTransactionEffectConfiguration *transactionEffect;
@property (retain, nonatomic) PKDynamicLayerCrossDissolveConfiguration *crossDissolve;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end

@class NSDictionary, NSMutableDictionary;

@interface PHASEMixerParameters : NSObject {
    NSMutableDictionary *_parameters;
}

@property (readonly, nonatomic) NSDictionary *parameterDictionary;

- (id)parameterDictionary;
- (void).cxx_destruct;
- (id)init;
- (void)addAmbientMixerParameters:(id)a0 listener:(id)a1;
- (void)addAmbientMixerParametersWithIdentifier:(id)a0 listener:(id)a1;
- (void)addSpatialMixerParameters:(id)a0 source:(id)a1 listener:(id)a2;
- (void)addSpatialMixerParametersWithIdentifier:(id)a0 source:(id)a1 listener:(id)a2;

@end

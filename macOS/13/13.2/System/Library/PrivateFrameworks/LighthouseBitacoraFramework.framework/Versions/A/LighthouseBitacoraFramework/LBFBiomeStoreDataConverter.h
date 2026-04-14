@interface LBFBiomeStoreDataConverter : NSObject

+ (id)createTrialIdentifiers:(id)a0;
+ (id)createMLRuntimedEvent:(id)a0 identifiers:(id)a1 timestamp:(id)a2;
+ (id)createLighthousePluginEvent:(id)a0 identifiers:(id)a1 timestamp:(id)a2;
+ (id)createTrialdEvent:(id)a0 identifiers:(id)a1 timestamp:(id)a2;
+ (id)serializeBitacoraStateToJson:(id)a0;
+ (id)protoFromTrialIdentifier:(id)a0;
+ (id)protoFromBiomeLighthousePluginEvent:(id)a0;
+ (id)protoFromBiomeMlruntimedEvent:(id)a0;
+ (id)protoFromBiomeTrialdEvent:(id)a0;

@end

@interface MLModelTypeRegistry : NSObject

+ (id)sharedInstance;

- (id)init;
- (Class)classForCompilingModelType:(int)a0;
- (id)classesForLoadingModelType:(int)a0;
- (id)classesForLoadingModelType:(int)a0 configuration:(id)a1 isUpdatable:(char)a2 isEncrypted:(char)a3;
- (id)loadNeuralNetworkClasses:(char)a0 trainWithMLCompute:(char)a1;

@end

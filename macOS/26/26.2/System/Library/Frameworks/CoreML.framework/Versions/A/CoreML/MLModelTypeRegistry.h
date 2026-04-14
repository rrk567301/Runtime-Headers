@interface MLModelTypeRegistry : NSObject

+ (id)sharedInstance;

- (Class)classForCompilingModelType:(int)a0;
- (id)classesForLoadingModelType:(int)a0 configuration:(id)a1 isUpdatable:(BOOL)a2 isEncrypted:(BOOL)a3;
- (id)classesForLoadingModelType:(int)a0;
- (id)init;
- (id)loadNeuralNetworkClasses:(BOOL)a0 trainWithMLCompute:(BOOL)a1;

@end

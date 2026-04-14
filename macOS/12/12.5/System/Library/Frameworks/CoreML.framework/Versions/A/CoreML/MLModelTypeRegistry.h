@interface MLModelTypeRegistry : NSObject

+ (id)sharedInstance;

- (id)init;
- (id)classesForLoadingModelType:(int)a0 isUpdatable:(BOOL)a1 trainWithMLCompute:(BOOL)a2;
- (id)loadNeuralNetworkClasses:(BOOL)a0 trainWithMLCompute:(BOOL)a1;
- (id)classesForLoadingModelType:(int)a0;
- (Class)classForCompilingModelType:(int)a0;

@end

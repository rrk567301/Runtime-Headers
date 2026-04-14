@interface MLModelTypeRegistry : NSObject

+ (id)sharedInstance;

- (id)init;
- (Class)classForLoadingModelType:(int)a0;
- (Class)classForLoadingModelType:(int)a0 isUpdatable:(BOOL)a1 trainWithMLCompute:(BOOL)a2;
- (Class)classForCompilingModelType:(int)a0;
- (Class)loadNeuralNetworkClass:(BOOL)a0 trainWithMLCompute:(BOOL)a1;

@end

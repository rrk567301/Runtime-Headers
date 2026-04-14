@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SSModelLoader : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *pendingUpdates;

+ (id)sharedInstance;
+ (id)assetDirectoryPathForType:(unsigned long long)a0 forUpdate:(BOOL)a1;

- (void)unpackageModelAssets:(id)a0 type:(unsigned long long)a1 group:(id)a2 completion:(id /* block */)a3;
- (void)removeAssetsWithName:(id)a0;
- (void)removeAssetsForType:(unsigned long long)a0 group:(id)a1;
- (id)init;
- (void)unpackageModelAssets:(id)a0 type:(unsigned long long)a1 intoDirectory:(id)a2 group:(id)a3 completion:(id /* block */)a4;
- (void)unpackageModelAssets:(id)a0 assetName:(id)a1 completion:(id /* block */)a2;
- (BOOL)hasPendingUpdates;
- (void)moveNewlyPackagedAssets:(id)a0;
- (void).cxx_destruct;

@end

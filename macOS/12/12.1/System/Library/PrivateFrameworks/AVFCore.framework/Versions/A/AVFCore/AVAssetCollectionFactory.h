@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetCollectionFactory : NSObject {
    NSObject<OS_dispatch_queue> *_collectionsQ;
    NSMutableDictionary *_collectionsByURLString;
}

+ (id)sharedAVAssetCollectionFactory;

- (void)dealloc;
- (id)init;
- (void)forgetCollectionWithURL:(id)a0;
- (id)collectionWithURL:(id)a0 options:(id)a1;
- (void)_cleanUpUncollectables;

@end

@class NSMutableDictionary, TPSDocument, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, TPSWidgetControllerDelegate;

@interface TPSWidgetController : NSObject {
    TPSDocument *_preferredDocument;
}

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *assetURLSessionMap;
@property (weak, nonatomic) id<TPSWidgetControllerDelegate> delegate;
@property (copy, nonatomic) TPSDocument *preferredDocument;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)preferredDocument;
- (void)setPreferredDocument:(id)a0;
- (void)attemptWidgetUpdateWith:(id)a0;
- (void)updateWidgetDocumentWithDocumentsMap:(id)a0 documentsDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 preferHardwareWelcome:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)widgetAssetsForDocument:(id)a0 preferCacheIfAvailable:(BOOL)a1 userInterfaceStyle:(long long)a2 completionHandler:(id /* block */)a3;
- (void)fetchWidgetAssetsForDocument:(id)a0 preferCacheIfAvailable:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)fetchAssetForAssets:(id)a0 language:(id)a1 userInterfaceStyle:(long long)a2 assetFileInfoManager:(id)a3 completionHandler:(id /* block */)a4;
- (id)cacheFileURLForAssets:(id)a0 language:(id)a1 userInterfaceStyle:(long long)a2 assetFileInfoManager:(id)a3;

@end

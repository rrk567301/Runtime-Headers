@class NSURL, NSString, AXAssetController;

@interface AXMImageCaptionModelAssetManager : NSObject <AXAssetControllerObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _didTryWaitingForAssetLookup;
    AXAssetController *_assetController;
}

@property (copy, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_performWithLock:(id /* block */)a0;
- (void)assetController:(id)a0 didFinishRefreshingAssets:(id)a1 wasSuccessful:(char)a2 error:(id)a3;
- (id)_modelURLForType:(unsigned long long)a0 baseURL:(id)a1;
- (id)infoForModelAtURL:(id)a0;
- (id)modelURLForType:(unsigned long long)a0 timeout:(double)a1;

@end

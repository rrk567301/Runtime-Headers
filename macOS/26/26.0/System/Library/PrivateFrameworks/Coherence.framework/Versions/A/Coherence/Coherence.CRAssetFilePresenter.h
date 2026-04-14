@class NSURL, NSOperationQueue, NSString;

@interface Coherence.CRAssetFilePresenter : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ presentedItemURL;
    void /* unknown type, empty encoding */ assetManager;
}

@property (nonatomic, readonly) NSURL *presentedItemURL;
@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (nonatomic, readonly) NSString *description;

- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)presentedSubitemDidChangeAtURL:(id)a0;
- (void)presentedSubitemDidAppearAtURL:(id)a0;

@end

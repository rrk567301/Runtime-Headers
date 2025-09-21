@class NSURL;

@interface AMSUIContentImageFetchOperation : AMSUIAssetFetchOperation

@property (retain) NSURL *imageURL;
@property (copy) id /* block */ fallbackBlock;

- (void)main;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)_fallbackWithURL:(id)a0;

@end

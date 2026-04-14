@interface WBSFaviconProviderUtilities : NSObject

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } defaultFaviconSize;

+ (void)_getImageInfoAndMultiResolutionDataForImageData:(id)a0 usingWebView:(id)a1 preferredSize:(struct CGSize { double x0; double x1; })a2 scales:(id)a3 completionHandler:(id /* block */)a4;
+ (void)_getMultiResolutionDataForImageData:(id)a0 usingWebView:(id)a1 preferredSize:(struct CGSize { double x0; double x1; })a2 scales:(id)a3 faviconInfo:(id)a4 completionHandler:(id /* block */)a5;
+ (struct CGSize { double x0; double x1; })closestSizeForPreferredSize:(struct CGSize { double x0; double x1; })a0 fromFaviconInfo:(id)a1;
+ (long long)computeRelativeSize:(struct CGSize { double x0; double x1; })a0 referenceSize:(struct CGSize { double x0; double x1; })a1;
+ (void)getImageInfoAndMultiResolutionDataForImageData:(id)a0 usingWebView:(id)a1 preferredSize:(struct CGSize { double x0; double x1; })a2 scales:(id)a3 completionHandler:(id /* block */)a4;
+ (id)imageWithURL:(id)a0 closetToPreferredSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isFaviconSize:(struct CGSize { double x0; double x1; })a0 morePreferrableThanFaviconSize:(struct CGSize { double x0; double x1; })a1 givenDesiredSize:(struct CGSize { double x0; double x1; })a2;

@end

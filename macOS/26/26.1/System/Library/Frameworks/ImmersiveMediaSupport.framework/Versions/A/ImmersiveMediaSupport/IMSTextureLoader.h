@interface IMSTextureLoader : NSObject

+ (void)loadWithContentsOfURLs:(id)a0 options:(id)a1 mtlDevice:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (void)loadAsSingleComponent8BitWithData:(id)a0 mtlDevice:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)loadWithContentsOfURL:(id)a0 options:(id)a1 mtlDevice:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (id)loadWithData:(id)a0 options:(id)a1 mtlDevice:(id)a2 error:(id *)a3;
+ (void)loadWithData:(id)a0 options:(id)a1 mtlDevice:(id)a2 withCompletionHandler:(id /* block */)a3;

@end

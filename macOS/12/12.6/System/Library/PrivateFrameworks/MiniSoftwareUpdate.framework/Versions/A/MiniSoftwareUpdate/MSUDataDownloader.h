@class NSOperationQueue;

@interface MSUDataDownloader : NSObject

@property unsigned long long options;
@property (retain) NSOperationQueue *delegateQueue;
@property (readonly) BOOL requiresEV;

+ (void)initialize;
+ (id)downloaderForCatalogURL:(id)a0 options:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)sendAsynchronousRequest:(id)a0 completion:(id /* block */)a1;
- (id)sendSynchronousRequest:(id)a0 response:(id *)a1 error:(id *)a2;
- (id)initWithCatalogOptions:(unsigned long long)a0;

@end

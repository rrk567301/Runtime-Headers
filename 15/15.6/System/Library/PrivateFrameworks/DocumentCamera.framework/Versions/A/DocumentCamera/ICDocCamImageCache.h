@class NSMutableDictionary, NSURL, DCLRUCache, NSObject;
@protocol OS_dispatch_queue, DCDataCryptorDelegate;

@interface ICDocCamImageCache : NSObject

@property (readonly, nonatomic) NSURL *cachesDirectoryURL;
@property (readonly, nonatomic) NSURL *docCamImageDirectoryURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageCacheQueue;
@property (retain, nonatomic) DCLRUCache *inMemoryImageCache;
@property (retain, nonatomic) NSMutableDictionary *imageSizeCache;
@property (retain, nonatomic) id<DCDataCryptorDelegate> dataCryptorDelegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)a0;
- (void)didReceiveMemoryWarning:(id)a0;
- (char)deleteAllImages;
- (void)clearInMemoryCache;
- (id)createNSDataFrom:(id)a0 metaData:(id)a1;
- (char)deleteImage:(id)a0;
- (id)getImage:(id)a0;
- (struct CGSize { double x0; double x1; })getImageSize:(id)a0;
- (id)getImageURL:(id)a0;
- (id)getImageURL:(id)a0 async:(char)a1;
- (id)imagePropertiesFromMetadata:(id)a0 orientation:(long long)a1;
- (id)initWithDataCryptorDelegate:(id)a0;
- (id)initWithDataCryptorDelegate:(id)a0 cachesDirectoryURL:(id)a1;
- (char)makeSureScanDirectoryExists:(id *)a0;
- (char)replaceImage:(id)a0 metaData:(id)a1 uuid:(id)a2;
- (id)setImage:(id)a0 metaData:(id)a1;
- (id)setImage:(id)a0 metaData:(id)a1 addToMemoryCache:(char)a2 completion:(id /* block */)a3;
- (char)writeImage:(id)a0 metaData:(id)a1 toURL:(id)a2 error:(id *)a3;

@end

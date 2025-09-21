@class NSURLSession, NSString, NSMapTable, NSMutableDictionary, geo_isolater, NSCache;

@interface MKAppImageManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {
    NSCache *_iconCache;
    NSURLSession *_session;
    geo_isolater *_containersLock;
    NSMapTable *_containers;
    geo_isolater *_urlConnectionsLock;
    NSMutableDictionary *_urlConnections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedImageManager;
+ (id)persistedCacheWithMemoryCapacity:(unsigned long long)a0 diskCapacity:(unsigned long long)a1 directoryName:(id)a2;
+ (id)sharedCollectionCoverImageManager;
+ (id)sharedImageManagerWithAuditToken:(id)a0;
+ (id)sharedVisitedPlacesContainerImageManager;

- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;
- (void)clearImageCache;
- (void)_dispatchOnManThread:(id /* block */)a0;
- (id)cachedImageAtURL:(id)a0;
- (void)cancelLoadAppImageAtURL:(id)a0;
- (id)initWithURLCache:(id)a0;
- (id)initWithURLCache:(id)a0 auditToken:(id)a1;
- (void)loadAppImageAtURL:(id)a0 completionHandler:(id /* block */)a1;

@end

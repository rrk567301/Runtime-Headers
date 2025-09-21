@class NSString, NSCache, NSXPCConnection;

@interface INImageServiceConnection : NSObject <INImageLoading, INImageStoring> {
    NSXPCConnection *_connection;
    NSCache *_localStorageCache;
}

@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) unsigned long long servicePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)schemaURLsForBundleIdentifiers:(id)a0;
- (id)_availableBundleIdentifiers;
- (id)_localStorageCache;
- (char)accessBundleContentForBundleIdentifiers:(id)a0 withBlock:(id /* block */)a1 error:(id *)a2;
- (id)availableSchemasWithError:(id *)a0;
- (char)canLoadImageDataForImage:(id)a0;
- (char)canStoreImage:(id)a0;
- (id)fetchShareExtensionIntentForExtensionContextUUID:(id)a0;
- (void)filePathForImage:(id)a0 usingPortableImageLoader:(id)a1 completion:(id /* block */)a2;
- (id)imageServiceSchemaURLsForBundleIdentifiers:(id)a0 error:(id *)a1;
- (id)loadDataImageFromImage:(id)a0 scaledSize:(struct { double x0; double x1; })a1 error:(id *)a2;
- (void)loadDataImageFromImage:(id)a0 usingPortableImageLoader:(id)a1 scaledSize:(struct { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)loadImageDataAndSizeForImage:(id)a0 reply:(id /* block */)a1;
- (id)loadSchemasForBundleIdentifiers:(id)a0 error:(id *)a1;
- (void)purgeImageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)retrieveImageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)securityScopedURLsForBundleIdentifiers:(id)a0 error:(id *)a1;
- (id)serviceProxyWithErrorHandler:(id /* block */)a0;
- (id)storeImage:(id)a0 scaled:(char)a1 qualityOfService:(unsigned int)a2 storeType:(unsigned long long)a3 error:(id *)a4;
- (oneway void)storeUserContext:(id)a0 forBundleIdentifier:(id)a1;
- (id)synchronousServiceProxyWithErrorHandler:(id /* block */)a0;

@end

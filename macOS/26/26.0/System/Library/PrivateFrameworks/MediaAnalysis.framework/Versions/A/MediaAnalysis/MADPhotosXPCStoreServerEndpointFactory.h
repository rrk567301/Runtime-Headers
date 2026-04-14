@class NSString, PHPhotoLibrary;

@interface MADPhotosXPCStoreServerEndpointFactory : NSObject <NSXPCStoreServerEndpointFactory> {
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newEndpoint;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;

@end

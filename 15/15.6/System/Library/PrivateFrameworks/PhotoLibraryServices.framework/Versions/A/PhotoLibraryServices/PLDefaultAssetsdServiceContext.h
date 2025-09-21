@class NSString, NSXPCConnection, NSError, PLPhotoLibraryBundle, PLAssetsdConnectionAuthorization;

@interface PLDefaultAssetsdServiceContext : NSObject <PLAssetsdServiceContext> {
    SEL _selector;
    NSXPCConnection *_connection;
    PLPhotoLibraryBundle *_libraryBundle;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}

@property (readonly, nonatomic) char isClientAuthorizedForTCCServicePhotos;
@property (readonly, nonatomic) char isClientAuthorizedForTCCServicePhotosAdd;
@property (readonly, copy, nonatomic) NSString *clientDebugDescription;
@property (readonly, copy) NSError *shutdownReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)hasEntitlement:(id)a0;
- (id)libraryServicesManager;
- (id)awaitLibraryState:(long long)a0;
- (id)initWithSelector:(SEL)a0 connection:(id)a1 libraryBundle:(id)a2 connectionAuthorization:(id)a3;
- (void)invalidateClientAuthorizationCache;

@end

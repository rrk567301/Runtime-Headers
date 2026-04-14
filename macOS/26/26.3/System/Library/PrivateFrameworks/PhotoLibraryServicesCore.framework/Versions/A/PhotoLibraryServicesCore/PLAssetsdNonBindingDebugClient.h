@interface PLAssetsdNonBindingDebugClient : PLAssetsdBaseClient

- (id)getStatus;
- (BOOL)getPhotosXPCEndpoint:(id *)a0 error:(id *)a1;
- (void)testAddressSanitizer;
- (void)testThreadSanitizer;
- (id)activePhotoLibraries:(id *)a0;
- (id)allKnownLibraryPaths:(id *)a0;
- (id)boundServicesForLibrary:(id)a0 error:(id *)a1;
- (id)existingPhotoLibraryIdentifierForPhotoLibraryURL:(id)a0 error:(id *)a1;
- (void)libraryServicesStateByBundlePathWithCompletion:(id /* block */)a0;

@end

@class SHCustomCatalogContainer, NSData;

@interface SHCustomCatalog : SHCatalog {
    double _minimumQuerySignatureDuration;
}

@property (readonly) SHCustomCatalogContainer *customCatalogContainer;
@property (readonly) long long density;
@property (readonly) NSData *dataRepresentation;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void)enumerateWithBlock:(id /* block */)a0;
- (BOOL)addReferenceSignature:(id)a0 representingMediaItems:(id)a1 error:(id *)a2;
- (double)_bufferDuration;
- (id)_initWithInstallationID:(id)a0;
- (double)minimumQuerySignatureDuration;
- (id)_createMatcher;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (id)initWithDensity:(long long)a0;
- (id)initWithDensity:(long long)a0 dataRepresentation:(id)a1 error:(id *)a2;
- (BOOL)addCustomCatalogFromURL:(id)a0 error:(id *)a1;
- (BOOL)addCustomCatalog:(id)a0 error:(id *)a1;
- (BOOL)addCustomCatalogDataRepresentation:(id)a0 error:(id *)a1;

@end

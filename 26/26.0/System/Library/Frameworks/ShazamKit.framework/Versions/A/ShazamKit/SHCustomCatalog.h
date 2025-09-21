@class SHCustomCatalogConfiguration, NSData;
@protocol SHCustomCatalogContainer;

@interface SHCustomCatalog : SHCatalog

@property (readonly, copy) SHCustomCatalogConfiguration *_configuration;
@property (readonly) id<SHCustomCatalogContainer> customCatalogContainer;
@property (readonly) long long count;
@property (readonly) NSData *dataRepresentation;

+ (id)new;

- (id)objectAtIndexedSubscript:(long long)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)init;
- (void)enumerateWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (BOOL)addReferenceSignature:(id)a0 representingMediaItems:(id)a1 error:(id *)a2;
- (void)removeReferenceSignatureWithID:(id)a0;
- (id)_createMatcher;
- (id)_customCatalogConfiguration;
- (BOOL)addCustomCatalog:(id)a0 error:(id *)a1;
- (BOOL)addCustomCatalogDataRepresentation:(id)a0 error:(id *)a1;
- (BOOL)addCustomCatalogFromURL:(id)a0 error:(id *)a1;
- (id)initWithConfiguration:(id)a0 dataRepresentation:(id)a1 error:(id *)a2;

@end

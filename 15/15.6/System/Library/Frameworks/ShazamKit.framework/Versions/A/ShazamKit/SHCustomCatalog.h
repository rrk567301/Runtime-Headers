@class SHCustomCatalogConfiguration, NSData;
@protocol SHCustomCatalogContainer;

@interface SHCustomCatalog : SHCatalog

@property (readonly, copy) SHCustomCatalogConfiguration *_configuration;
@property (readonly) id<SHCustomCatalogContainer> customCatalogContainer;
@property (readonly) long long count;
@property (readonly) NSData *dataRepresentation;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(long long)a0;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (char)writeToURL:(id)a0 error:(id *)a1;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (char)addReferenceSignature:(id)a0 representingMediaItems:(id)a1 error:(id *)a2;
- (void)removeReferenceSignatureWithID:(id)a0;
- (id)_createMatcher;
- (id)_customCatalogConfiguration;
- (char)addCustomCatalog:(id)a0 error:(id *)a1;
- (char)addCustomCatalogDataRepresentation:(id)a0 error:(id *)a1;
- (char)addCustomCatalogFromURL:(id)a0 error:(id *)a1;
- (id)initWithConfiguration:(id)a0 dataRepresentation:(id)a1 error:(id *)a2;

@end

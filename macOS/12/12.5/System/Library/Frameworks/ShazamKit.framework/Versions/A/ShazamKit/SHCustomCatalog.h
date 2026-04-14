@class NSArray, SHCustomCatalogContainer;
@protocol SHCustomCatalogDelegate;

@interface SHCustomCatalog : SHCatalog {
    double _minimumQuerySignatureDuration;
}

@property (retain) NSArray *_referenceAudioMediaItems;
@property (readonly) double _windowSeconds;
@property (weak) id<SHCustomCatalogDelegate> _customCatalogDelegate;
@property (readonly) SHCustomCatalogContainer *customCatalogContainer;
@property (readonly) long long density;
@property (readonly) NSArray *mediaItems;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void)enumerateWithBlock:(id /* block */)a0;
- (double)_bufferDuration;
- (BOOL)addReferenceSignature:(id)a0 representingMediaItems:(id)a1 error:(id *)a2;
- (id)_initWithInstallationID:(id)a0;
- (double)minimumQuerySignatureDuration;
- (id)_createMatcher;
- (id)initWithWindowSeconds:(double)a0 minimumSignatureDuration:(double)a1 density:(long long)a2;
- (id)initWithDensity:(long long)a0;
- (void)flowReferenceAudio:(id)a0 atTime:(id)a1 representingMediaItems:(id)a2;
- (BOOL)addCustomCatalogFromURL:(id)a0 error:(id *)a1;
- (BOOL)_addReferenceSignature:(id)a0 forReferenceMediaItemsWithError:(id *)a1;

@end

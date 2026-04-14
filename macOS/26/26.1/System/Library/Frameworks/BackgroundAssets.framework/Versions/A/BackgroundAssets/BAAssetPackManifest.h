@class NSSet;

@interface BAAssetPackManifest : NSObject {
    void /* unknown type, empty encoding */ manifest;
}

@property (nonatomic, readonly) NSSet *assetPacks;

- (void).cxx_destruct;
- (id)init;
- (id)allDownloads;
- (id)allDownloadsForContentRequest:(long long)a0;
- (id)initFromData:(id)a0 applicationGroupIdentifier:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 applicationGroupIdentifier:(id)a1 error:(id *)a2;

@end

@class CIImage, NSString, NUSourceContainerNode;
@protocol NUAssetMedia;

@interface _NUCIImageAsset : _NUAsset <NUImageAsset> {
    NUSourceContainerNode *_sourceContainerNode;
}

@property (readonly, nonatomic) CIImage *image;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id<NUAssetMedia> media;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_loadMediaWithOptions:(id)a0 error:(out id *)a1;
- (id)initWithCIImage:(id)a0 type:(long long)a1 identifier:(id)a2;

@end

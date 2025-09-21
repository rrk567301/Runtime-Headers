@class NSURL, NSString, NUSourceContainerNode;
@protocol NUAssetMedia;

@interface _NUImageAsset : _NUAsset <NUImageAsset> {
    NUSourceContainerNode *_sourceContainerNode;
}

@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id<NUAssetMedia> media;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageURL:(id)a0;
- (id)_loadMediaWithOptions:(id)a0 error:(out id *)a1;
- (id)initWithImageURL:(id)a0 identifier:(id)a1;

@end

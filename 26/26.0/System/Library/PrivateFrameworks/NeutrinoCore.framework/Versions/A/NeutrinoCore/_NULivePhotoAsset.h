@class NSString;
@protocol NUImageAsset, NUVideoAsset, NUAssetMedia;

@interface _NULivePhotoAsset : _NUAsset <NULivePhotoAsset>

@property (readonly, nonatomic) id<NUImageAsset> image;
@property (readonly, nonatomic) id<NUVideoAsset> video;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id<NUAssetMedia> media;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 video:(id)a1 identifier:(id)a2;
- (id)_loadMediaWithOptions:(id)a0 error:(out id *)a1;
- (id)initWithImage:(id)a0 video:(id)a1;
- (id)initWithImageURL:(id)a0 videoURL:(id)a1;
- (id)initWithImageURL:(id)a0 videoURL:(id)a1 identifier:(id)a2;

@end

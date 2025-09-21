@class NSString;
@protocol NUAssetMedia;

@interface _NUAsset : NSObject <NUAsset> {
    id<NUAssetMedia> _media;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id<NUAssetMedia> media;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)loadWithOptions:(id)a0 error:(out id *)a1;
- (id)_loadMediaWithOptions:(id)a0 error:(out id *)a1;

@end

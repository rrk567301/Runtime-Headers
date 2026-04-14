@class CSAsset, NSString;

@interface CSRemoteAssetCache : NSObject

@property (readonly, nonatomic) CSAsset *asset;
@property (readonly, nonatomic) NSString *languageCode;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 languageCode:(id)a1;

@end

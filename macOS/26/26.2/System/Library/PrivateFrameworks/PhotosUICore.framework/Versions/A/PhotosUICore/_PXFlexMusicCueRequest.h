@class PXFlexMusicAsset;

@interface _PXFlexMusicCueRequest : NSObject

@property (readonly, nonatomic) PXFlexMusicAsset *asset;
@property (readonly, copy, nonatomic) id /* block */ resultHandler;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAsset:(id)a0 resultHandler:(id /* block */)a1;

@end

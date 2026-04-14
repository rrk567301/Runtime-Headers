@class _TtC8CloudKit17AssetStreamHandle;

@interface CKMediaItemMaker : NSObject

@property (readonly, nonatomic) _TtC8CloudKit17AssetStreamHandle *assetStreamHandle;

- (void).cxx_destruct;
- (id)dataRepresentationWithError:(id *)a0;
- (id)initWithAssetStreamHandle:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)makeAVAssetExportSession:(id)a0 options:(id)a1 presetName:(id)a2;
- (id)makeAVPlayerItemWithURL:(id)a0;
- (id)makeAVPlayerItemWithURL:(id)a0 options:(id)a1;

@end

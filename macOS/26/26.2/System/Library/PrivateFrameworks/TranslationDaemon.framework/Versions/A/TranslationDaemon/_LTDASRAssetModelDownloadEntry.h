@class NSMutableArray;
@protocol _LTDAssetModelProtocol;

@interface _LTDASRAssetModelDownloadEntry : NSObject

@property (retain, nonatomic) id<_LTDAssetModelProtocol> asset;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) id /* block */ progress;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSMutableArray *duplicateEntries;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;

@end

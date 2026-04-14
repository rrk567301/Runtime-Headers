@class MPCSonicAVItemAsset, MPCSonicAVItem_Swift;

@interface MPCSonicAVItem : MPCModelGenericAVItem

@property (retain, nonatomic) MPCSonicAVItem_Swift *swift;
@property (retain, nonatomic) MPCSonicAVItemAsset *swiftAsset;

- (void).cxx_destruct;
- (id)contentIdentifier;
- (void)loadAssetAndPlayerItemWithTask:(id)a0 completion:(id /* block */)a1;
- (void)prepareForRate:(float)a0 completionHandler:(id /* block */)a1;
- (void)emitEventType:(id)a0 payload:(id)a1;
- (id)initWithGenericObject:(id)a0 itemProperties:(id)a1 playbackRequestEnvironment:(id)a2 identityPropertySet:(id)a3 contentID:(id)a4;
- (BOOL)isHLSAsset;
- (long long)loadedAudioAssetType;
- (long long)playerItemType;

@end

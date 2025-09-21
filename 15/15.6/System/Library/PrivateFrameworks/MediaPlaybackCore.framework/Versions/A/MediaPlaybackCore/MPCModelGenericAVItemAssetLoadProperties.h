@class MPCAudioAssetTypeSelection, NSString, MPModelHomeSharingAsset, MPModelGenericObject, MPIdentifierSet, MPModelStoreAsset, MPModelFileAsset;
@protocol MPCModelPlaybackAssetCacheProviding;

@interface MPCModelGenericAVItemAssetLoadProperties : NSObject

@property (nonatomic) long long HLSContentPolicy;
@property (readonly, nonatomic) char allowsHLSContent;
@property (nonatomic) char prefersVideoContent;
@property (retain, nonatomic) id<MPCModelPlaybackAssetCacheProviding> assetCacheProvider;
@property (retain, nonatomic) MPModelFileAsset *fileAsset;
@property (retain, nonatomic) MPModelGenericObject *genericObject;
@property (retain, nonatomic) MPModelHomeSharingAsset *homeSharingAsset;
@property (retain, nonatomic) MPIdentifierSet *itemIdentifiers;
@property (nonatomic) char prefersHighQualityContent;
@property (nonatomic, getter=isRadioPlayback) char radioPlayback;
@property (retain, nonatomic) MPModelStoreAsset *storeAsset;
@property (nonatomic, getter=isFollowUp) char followUp;
@property (nonatomic) unsigned long long accountID;
@property (nonatomic) unsigned long long delegatedAccountID;
@property (copy, nonatomic) NSString *householdID;
@property (copy, nonatomic) NSString *storefrontID;
@property (nonatomic) long long preferredAudioAssetType;
@property (retain, nonatomic) MPCAudioAssetTypeSelection *audioAssetTypeSelection;
@property (nonatomic) char supportsVocalAttenuation;

- (void).cxx_destruct;

@end

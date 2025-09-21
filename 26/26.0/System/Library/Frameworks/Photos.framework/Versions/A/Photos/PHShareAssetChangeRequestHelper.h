@class NSString, NSXPCConnection, PHChangeRequest, PHObject, NSOrderedSet, NSDictionary;
@protocol PHShare;

@interface PHShareAssetChangeRequestHelper : NSObject {
    NSXPCConnection *_clientConnection;
    NSString *_keySourceAssetIdentifier;
    NSString *_commentText;
    NSOrderedSet *_sourceAssetIdentifiersForBatchedCreation;
    NSOrderedSet *_sourceAssetIdentifiersForCurationSet;
    NSDictionary *_sourceAssetToShareAssetMapForCreationRequest;
    NSDictionary *_sourceAssetIdentifiersToAdjustmentBakeInOptionsDictionaryForBatchedCreation;
    NSDictionary *_sourceAssetIdentifiersToMetadataCopyOptionsDictionaryForBatchedCreation;
}

@property (retain, nonatomic) PHChangeRequest *changeRequest;
@property (retain, nonatomic) PHObject<PHShare> *backingShare;

- (void).cxx_destruct;
- (void)addAssetsToCPLShare:(id)a0 creationOptionsPerAsset:(id)a1 withMomentSharePreview:(id)a2 outKeyAssetIdentifier:(id *)a3 outContainsEPPAssets:(BOOL *)a4;
- (void)addAssetsToSharedStreamShare:(id)a0 creationOptionsPerAsset:(id)a1 withBatchCommentText:(id)a2;
- (BOOL)applyMutationsToManagedObject:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initWithChangeRequest:(id)a0;
- (id)initWithXpcDict:(id)a0 request:(id)a1 changeRequest:(id)a2;

@end

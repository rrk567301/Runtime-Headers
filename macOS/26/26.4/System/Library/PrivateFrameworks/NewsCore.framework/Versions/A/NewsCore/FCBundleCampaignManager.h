@class NSString, NFUnfairLock;
@protocol FCBundleCampaignAccessProviding;

@interface FCBundleCampaignManager : NSObject <FCBundleCampaignManagerType>

@property (retain, nonatomic) id<FCBundleCampaignAccessProviding> protectedBundleCampaignAccess;
@property (retain, nonatomic) NFUnfairLock *lock;
@property (retain, nonatomic) id<FCBundleCampaignAccessProviding> bundleCampaignAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (BOOL)hasAccessToTag:(id)a0;
- (BOOL)hasAccessToContentType:(unsigned long long)a0 sourceIdentifier:(id)a1 itemIdentifier:(id)a2;
- (BOOL)hasAccessToHeadline:(id)a0;
- (BOOL)hasAccessToIssue:(id)a0;
- (BOOL)hasAccessToItem:(id)a0;
- (BOOL)hasAccessToItemWithIdentifier:(id)a0 sourceIdentifier:(id)a1;
- (BOOL)hasAccessToPuzzle:(id)a0;
- (BOOL)hasAccessToRecipe:(id)a0;
- (BOOL)hasAccessToTagIdentifier:(id)a0;
- (id)resolveContentTypeForItemIdentifier:(id)a0;

@end

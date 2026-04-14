@class NSArray, NSMutableArray, WBSLPLinkMetadataProvider;

@interface WBSRecentsStore : NSObject {
    NSMutableArray *_providers;
    NSMutableArray *_recentItemsByProviderIndex;
}

@property (readonly, nonatomic) NSArray *displayableRecentItems;
@property (readonly, nonatomic) NSArray *availableDevices;
@property (readonly, weak, nonatomic) WBSLPLinkMetadataProvider *linkPresentationMetadataProvider;

- (void)registerProvider:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLinkPresentationMetadataProvider:(id)a0;
- (void)_rebuildAllRecentItemsAndDevices;
- (void)ingestRecentItemsFromProvider:(id)a0;
- (id)providerForItem:(id)a0;

@end

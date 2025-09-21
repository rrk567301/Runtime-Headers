@class NSString;

@interface DUFileUpdateSpotlightReceiver : NSObject <SpotlightReceiver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportedBundleIDs;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteAllSearchableItemsWithBundleID:(id)a0;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 bundleID:(id)a1;
- (id)supportedContentTypes;
- (void)purgeSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteSearchableItemsSinceDate:(id)a0 bundleID:(id)a1;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1;

@end

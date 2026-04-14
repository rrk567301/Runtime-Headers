@class NSMutableDictionary, NSObject;
@protocol OS_os_transaction;

@interface _CDSpotlightCoalescedDeletionOperation : NSObject {
    NSMutableDictionary *_bundleIdToItemIdentifiers;
    NSMutableDictionary *_bundleIdToItemCompletionBlocks;
    NSMutableDictionary *_bundleIdToDomainIdentifiers;
    NSMutableDictionary *_bundleIdToDomainCompletionBlocks;
    NSObject<OS_os_transaction> *_transaction;
}

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (BOOL)addDeletion:(id)a0;
- (void)enumerateDeletionPredicatesAndCompletionsWithBlock:(id /* block */)a0;
- (id)initWithBundleIdToIdentifiers:(id)a0 bundleIdToCompletionBlocks:(id)a1 bundleIdToDomainIdentifiers:(id)a2 bundleIdToDomainCompletionBlocks:(id)a3;

@end

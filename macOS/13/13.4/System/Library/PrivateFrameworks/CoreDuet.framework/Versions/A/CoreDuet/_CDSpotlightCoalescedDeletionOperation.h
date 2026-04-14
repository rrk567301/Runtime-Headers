@class NSMutableDictionary;

@interface _CDSpotlightCoalescedDeletionOperation : NSObject

@property (retain, nonatomic) NSMutableDictionary *bundleIdToItemIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *bundleIdToItemCompletionBlocks;
@property (retain, nonatomic) NSMutableDictionary *bundleIdToDomainIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *bundleIdToDomainCompletionBlocks;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)addDeletion:(id)a0;
- (void)enumerateDeletionPredicatesAndCompletionsWithBlock:(id /* block */)a0;
- (id)initWithBundleIdToIdentifiers:(id)a0 bundleIdToCompletionBlocks:(id)a1 bundleIdToDomainIdentifiers:(id)a2 bundleIdToDomainCompletionBlocks:(id)a3;

@end

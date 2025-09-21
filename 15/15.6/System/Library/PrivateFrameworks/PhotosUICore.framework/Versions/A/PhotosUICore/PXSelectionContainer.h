@class PXContentPrivacyController, PXSelectionSnapshot, NSUndoManager, NSString, PXSectionedChangeDetailsRepository;
@protocol PXDisplayCollectionFetcher, PXFastEnumeration, PXDisplayCollection;

@interface PXSelectionContainer : NSObject

@property (readonly, nonatomic) long long selectionCount;
@property (readonly, nonatomic) char hasExplicitSelection;
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly, nonatomic) id<PXDisplayCollection> collection;
@property (readonly, weak, nonatomic) id<PXDisplayCollectionFetcher> collectionFetcher;
@property (readonly, nonatomic) PXSectionedChangeDetailsRepository *changeHistory;
@property (readonly, nonatomic) id<PXFastEnumeration> selectedObjects;
@property (readonly, nonatomic) char containsReferencedFileAssets;
@property (readonly, nonatomic) char containsRAWPlusJPEGAssets;
@property (readonly, nonatomic) char containsRAWAssets;
@property (readonly, nonatomic) char containsSpatialAssets;
@property (readonly, nonatomic) char containsSpatialVideoAssets;
@property (readonly, nonatomic) char containsUnsavedContentSyndicationAssets;
@property (readonly, nonatomic) char containsContentSyndicationAssets;
@property (readonly, nonatomic) char containsNonContentSyndicationAssets;
@property (readonly, nonatomic) char containsAssetsWithNonEditableProperties;
@property (readonly, nonatomic) char containsPeople;
@property (readonly, nonatomic) char containsMemories;
@property (readonly, nonatomic) id<PXFastEnumeration> selectedContainedAssets;
@property (readonly, nonatomic) char allowImplicitSelectionForProjectsOrSharing;
@property (readonly, nonatomic) id<PXFastEnumeration> selectedContainedAssetsForProjectsOrSharing;
@property (readonly, nonatomic) id<PXFastEnumeration> allDataSourceObjects;
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) PXContentPrivacyController *privacyController;
@property (readonly, copy, nonatomic) NSString *title;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToSelection:(id)a0;
- (char)containsObjectOfClass:(Class)a0 passingTest:(id /* block */)a1;
- (void)enumerateSelectedObjectsOfClass:(Class)a0 usingBlock:(id /* block */)a1;
- (id)firstSelectedObjectOfClass:(Class)a0;
- (char)hasAnyChangesFromSelection:(id)a0;
- (id)initWithCollection:(id)a0 collectionFetcher:(id)a1 undoManager:(id)a2 context:(long long)a3;
- (id)initWithContent:(id)a0 collection:(id)a1 undoManager:(id)a2 context:(long long)a3;
- (id)initWithContent:(id)a0 undoManager:(id)a1 context:(long long)a2;
- (id)initWithDataSection:(id)a0 collection:(id)a1 undoManager:(id)a2 context:(long long)a3;
- (id)initWithSelectionSnapshot:(id)a0 collection:(id)a1 undoManager:(id)a2 context:(long long)a3;
- (id)initWithSelectionSnapshot:(id)a0 collection:(id)a1 undoManager:(id)a2 context:(long long)a3 privacyController:(id)a4 changeHistory:(id)a5;
- (id)initWithSelectionSnapshot:(id)a0 undoManager:(id)a1 context:(long long)a2;
- (id)initWithSelectionSnapshot:(id)a0 undoManager:(id)a1 context:(long long)a2 privacyController:(id)a3;
- (id)selectedContainedAssets:(char)a0;
- (id)selectedContainedAssets:(char)a0 allowedClasses:(id)a1;
- (id)selectedObjects:(char)a0;
- (id)selectedObjectsOfClass:(Class)a0;
- (id)singleSelectedObjectOfClass:(Class)a0;

@end

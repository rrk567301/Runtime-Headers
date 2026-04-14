@class PXSharedLibrarySharingSuggestionsDataSourceManager, PXSharedLibrarySharingSuggestionsCountsManager, PXFeedGadget, PXLibraryFilterState, NSString, NSDate;

@interface PXSharedLibrarySharingSuggestionsGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXForYouRankable>

@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsCountsManager *countsManager;
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (nonatomic) BOOL wantsGadgets;
@property (retain, nonatomic) PXFeedGadget *feedGadget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)_commonInit;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (unsigned long long)gadgetType;
- (void)_invalidateWantsGadget;
- (void)_updateWantsGadget;

@end

@class NSString;

@interface PXCuratedLibraryShowFiltersActionPerformer : PXCuratedLibraryActionPerformer <PXFilterControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performUserInteractionTask;
- (char)_isAlreadyDone;
- (id)contentFilterHiddenTypesForFilterController:(id)a0;
- (void)filterController:(id)a0 contentFilterStateChanged:(id)a1;
- (void)filterControllerDidClose:(id)a0;
- (char)performerResetsAfterCompletion;

@end

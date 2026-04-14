@class NSString;

@interface PXCuratedLibraryFilterActionPerformer : PXCuratedLibraryActionPerformer <PXFilterControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performUserInteractionTask;
- (BOOL)performerResetsAfterCompletion;
- (id)libraryFilterHiddenTypesForFilterController:(id)a0;
- (id)contentFilterHiddenTypesForFilterController:(id)a0;
- (void)filterController:(id)a0 libraryFilterStateChanged:(id)a1;
- (void)filterController:(id)a0 contentFilterStateChanged:(id)a1;
- (void)filterControllerDidClose:(id)a0;
- (BOOL)_isAlreadyDone;

@end

@class NSString;

@interface PXCuratedLibraryFilterActionPerformer : PXCuratedLibraryActionPerformer <PXFilterControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performUserInteractionTask;
- (BOOL)performerResetsAfterCompletion;
- (id)initWithActionType:(id)a0 viewModel:(id)a1;
- (long long)libraryTypeForFilterController:(id)a0;
- (id)contentFilterHiddenTypesForFilterController:(id)a0;
- (void)filterController:(id)a0 contentFilterStateChanged:(id)a1;
- (void)filterControllerDidComplete:(id)a0;

@end

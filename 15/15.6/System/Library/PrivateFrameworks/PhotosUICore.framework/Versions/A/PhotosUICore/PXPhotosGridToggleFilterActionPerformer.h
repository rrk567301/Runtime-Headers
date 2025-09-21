@interface PXPhotosGridToggleFilterActionPerformer : PXPhotosGridActionPerformer

+ (char)isLibaryFilterHidden:(long long)a0 viewModel:(id)a1;
+ (char)canPerformActionType:(id)a0 withViewModel:(id)a1;
+ (char)isContentFilterHidden:(long long)a0 viewModel:(id)a1;

- (void)finishedUserInteractionTask;
- (char)performerResetsAfterCompletion;
- (char)updateToContentFilterStateAndFinishTask:(id)a0;
- (char)updateToLibraryFilterStateAndFinishTask:(id)a0;

@end

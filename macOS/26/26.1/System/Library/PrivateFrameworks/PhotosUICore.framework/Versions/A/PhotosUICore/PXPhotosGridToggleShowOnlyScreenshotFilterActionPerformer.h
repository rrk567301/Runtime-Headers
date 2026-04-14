@interface PXPhotosGridToggleShowOnlyScreenshotFilterActionPerformer : PXPhotosGridToggleFilterActionPerformer

+ (BOOL)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (void)performUserInteractionTask;
- (long long)menuActionState;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end

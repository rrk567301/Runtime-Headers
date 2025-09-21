@interface PXPhotosGridToggleAspectFitActionPerformer : PXPhotosGridActionPerformer

+ (char)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (void)performUserInteractionTask;
- (id)barButtonItemWithTarget:(id)a0 action:(SEL)a1;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (char)performerResetsAfterCompletion;

@end

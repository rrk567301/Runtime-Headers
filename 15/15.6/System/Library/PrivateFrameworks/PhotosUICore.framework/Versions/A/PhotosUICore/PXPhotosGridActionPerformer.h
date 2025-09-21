@class PXPhotosViewModel, PXContentFilterState;

@interface PXPhotosGridActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) PXContentFilterState *currentContentFilterState;

+ (char)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0;
- (id)initWithViewModel:(id)a0 actionType:(id)a1;

@end

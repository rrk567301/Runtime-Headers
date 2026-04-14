@class MUIRecategorizationViewModel;

@interface MUIRecategorizationMenuController : NSObject <NSMenuDelegate>

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, readonly) MUIRecategorizationViewModel *viewModel;

- (void)menuNeedsUpdate:(id)a0;
- (id)init;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)menuForSourceType:(long long)a0;
- (void)updateCategoryBucket:(id)a0;

@end

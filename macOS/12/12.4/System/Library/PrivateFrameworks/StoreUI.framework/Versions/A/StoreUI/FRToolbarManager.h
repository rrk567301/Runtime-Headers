@class FRViewNavigationController;

@interface FRToolbarManager : NSObject

@property (weak, nonatomic) FRViewNavigationController *navigationController;

- (void).cxx_destruct;
- (id)initWithNavigationController:(id)a0;
- (void)setLeadingToolbarItem:(id)a0;
- (void)setTrailingToolbarItem:(id)a0;
- (void)startSearch:(id)a0;

@end

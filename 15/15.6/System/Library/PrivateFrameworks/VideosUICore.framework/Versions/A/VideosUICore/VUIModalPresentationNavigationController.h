@class NSViewController, NSArray, NSHashTable, NSMapTable, VUIModalPresentationConfiguration;

@interface VUIModalPresentationNavigationController : VUINSNavigationController {
    NSHashTable *_presentedViewControllers;
    NSViewController *_rootViewController;
    NSArray *_previousViewControllers;
    NSMapTable *_pushCompletionBlocks;
    NSMapTable *_popCompletionBlocks;
}

@property (retain, nonatomic) VUIModalPresentationConfiguration *configuration;
@property (readonly, nonatomic) NSHashTable *presentedViewControllers;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)popViewControllerAnimated:(char)a0;
- (void)pushViewController:(id)a0 animated:(char)a1;
- (void)didShowViewController:(id)a0 animated:(char)a1;
- (void)_updateConfiguration;
- (void)_dismissForLastViewController:(char)a0;
- (id)popViewControllerAnimated:(char)a0 completion:(id /* block */)a1;
- (void)pushViewController:(id)a0 animated:(char)a1 completion:(id /* block */)a2;

@end

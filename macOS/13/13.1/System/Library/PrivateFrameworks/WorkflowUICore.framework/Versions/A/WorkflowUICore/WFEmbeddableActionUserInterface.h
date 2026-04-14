@class NSViewController;

@interface WFEmbeddableActionUserInterface : WFActionUserInterface

@property (retain, nonatomic) NSViewController *contentViewController;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)presentContent:(id)a0;

@end

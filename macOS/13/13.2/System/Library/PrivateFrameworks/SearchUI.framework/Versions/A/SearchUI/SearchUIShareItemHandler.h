@class SearchUICommandHandler;

@interface SearchUIShareItemHandler : SearchUICommandHandler

@property (retain) SearchUICommandHandler *handlerForSharing;

- (void).cxx_destruct;
- (unsigned long long)destination;
- (id)defaultTitle;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (BOOL)prefersModalPresentation;
- (id)defaultSymbolName;
- (BOOL)presentShareViewControllerForItem:(id)a0;

@end

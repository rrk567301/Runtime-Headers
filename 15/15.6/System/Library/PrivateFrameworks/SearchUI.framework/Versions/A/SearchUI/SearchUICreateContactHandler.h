@interface SearchUICreateContactHandler : SearchUICommandHandler

- (unsigned long long)destination;
- (id)contactFromCommand;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (char)prefersContextMenu;
- (char)prefersModalPresentation;

@end

@interface SUICHandsOnAutoDismissalStrategy : SUICAutoDismissalStrategy {
    id /* block */ _mapsNavigationStatusIsActiveBlock;
}

- (void).cxx_destruct;
- (char)shouldDismiss;
- (id /* block */)_mapsNavigationStatusIsActiveBlock;
- (void)_setMapsNavigationStatusIsActiveBlock:(id /* block */)a0;
- (double)idleTimeInterval;

@end

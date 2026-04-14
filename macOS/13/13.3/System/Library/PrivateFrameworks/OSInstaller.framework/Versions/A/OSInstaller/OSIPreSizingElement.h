@interface OSIPreSizingElement : OSIInstallQueueElement {
    unsigned long long _spaceNeededToInstall;
}

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (void)_updateProgressTimer:(id)a0;
- (id)initWithOptions:(id)a0 requiredSpaceToInstall:(unsigned long long)a1;

@end

@interface TransparencyDaemon : NSObject

- (void)configurationBagFetch:(id /* block */)a0;
- (void)transparencyIDSRepair:(id /* block */)a0;
- (void)transparencySysDiagnose:(id /* block */)a0;
- (void)transparencySelfCheck:(id /* block */)a0;
- (void)transparencyFetchIDMS:(id /* block */)a0;

@end

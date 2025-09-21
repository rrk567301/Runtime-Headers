@interface FileProviderDaemon.DummyEnumeratorObserver : NSObject <FPXEnumeratorObserver>

- (id)init;
- (void)enumerationResultsDidChange;
- (void)didUpdateItem:(id)a0;

@end

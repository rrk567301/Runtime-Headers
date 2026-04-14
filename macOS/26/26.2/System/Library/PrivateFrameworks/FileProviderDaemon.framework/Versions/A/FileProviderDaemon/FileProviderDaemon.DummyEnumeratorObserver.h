@interface FileProviderDaemon.DummyEnumeratorObserver : NSObject <FPXEnumeratorObserver>

- (void)enumerationResultsDidChange;
- (id)init;
- (void)didUpdateItem:(id)a0;

@end

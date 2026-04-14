@interface FileProviderDaemon.DummyEnumeratorObserver : NSObject <FPXEnumeratorObserver>

- (void)didUpdateItem:(id)a0;
- (void)enumerationResultsDidChange;
- (id)init;

@end

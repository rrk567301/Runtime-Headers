@class NSURL;

@interface SearchUIOpenFileProviderItemHandler : SearchUICommandHandler

@property (retain) NSURL *fileProviderURL;

+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;

- (void).cxx_destruct;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (void)fetchShareableURLWithCompletionHandler:(id /* block */)a0;
- (BOOL)supportsShare;
- (void)fetchFileProviderURLWithCompletionHandler:(id /* block */)a0;
- (BOOL)openFileURLInPlaceInDefaultApplicationIfPossible:(id)a0;

@end

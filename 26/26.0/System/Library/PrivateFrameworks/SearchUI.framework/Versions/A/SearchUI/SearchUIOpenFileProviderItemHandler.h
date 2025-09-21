@class NSURL, SFOpenFileProviderItemCommand;

@interface SearchUIOpenFileProviderItemHandler : SearchUICommandHandler

@property (readonly, nonatomic) NSURL *fileProviderURL;
@property (readonly) SFOpenFileProviderItemCommand *command;

+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;

- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (id)destinationApplicationIconImage;
- (id)blockAndFetchFileProviderURL;
- (id)defaultSymbolName;
- (BOOL)doesRunSynchronously;
- (void)fetchPreviewItemIfNeeded:(id /* block */)a0;
- (void)fetchShareableURLWithCompletionHandler:(id /* block */)a0;
- (BOOL)openFileURLInPlaceInDefaultApplicationIfPossible:(id)a0;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (id)previewItem;
- (BOOL)supportsOpen;
- (BOOL)supportsShare;

@end

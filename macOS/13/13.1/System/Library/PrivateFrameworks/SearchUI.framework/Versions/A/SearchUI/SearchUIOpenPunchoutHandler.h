@class SFOpenPunchoutCommand;

@interface SearchUIOpenPunchoutHandler : SearchUICommandHandler

@property (readonly) SFOpenPunchoutCommand *command;

+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;

- (id)url;
- (id)writableTypesForPasteboard:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (id)previewItem;
- (void)fetchShareableURLWithCompletionHandler:(id /* block */)a0;
- (BOOL)supportsShare;
- (id)destinationPunchout;
- (BOOL)schemeSupportedForCopyAndShare;

@end

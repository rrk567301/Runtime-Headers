@class SFOpenPunchoutCommand;

@interface SearchUIOpenPunchoutHandler : SearchUICommandHandler

@property (readonly) SFOpenPunchoutCommand *command;

+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;

- (id)url;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (id)destinationPunchout;
- (void)fetchShareableURLWithCompletionHandler:(id /* block */)a0;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (id)previewItem;
- (BOOL)schemeSupportedForCopyAndShare;
- (BOOL)supportsShare;

@end

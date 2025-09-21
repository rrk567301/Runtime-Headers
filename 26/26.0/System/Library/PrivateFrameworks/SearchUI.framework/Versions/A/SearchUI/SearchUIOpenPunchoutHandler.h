@class SFOpenPunchoutCommand;

@interface SearchUIOpenPunchoutHandler : SearchUICommandHandler

@property (readonly) SFOpenPunchoutCommand *command;
@property unsigned long long punchoutType;

+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;
+ (BOOL)punchoutIsOpenableInFinder:(id)a0;

- (id)url;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (id)defaultTitle;
- (id)additionalPreviewActionCommandHandlers;
- (id)defaultSymbolName;
- (id)destinationPunchout;
- (void)fetchShareableURLWithCompletionHandler:(id /* block */)a0;
- (BOOL)isWebPunchout;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (BOOL)prefersModalPresentation;
- (id)previewItem;
- (BOOL)schemeSupportedForCopyAndShare;
- (BOOL)supportsOpen;
- (BOOL)supportsShare;

@end

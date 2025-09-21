@class NSArray;

@interface NSOpenPanel : NSSavePanel

@property char showsContentTypes;
@property (readonly, copy) NSArray *URLs;
@property char resolvesAliases;
@property char canChooseDirectories;
@property char allowsMultipleSelection;
@property char canChooseFiles;
@property char canResolveUbiquitousConflicts;
@property char canDownloadUbiquitousContents;
@property (getter=isAccessoryViewDisclosed) char accessoryViewDisclosed;

+ (id)openPanel;
+ (void)_showExistingOpenPanel:(id)a0;

- (char)_accessoryViewDisclosureIsSupported;
- (char)_canAddUnderTitlebarViews;
- (id)_descriptionProperties;
- (char)_excludeFilesInEnableURLDelegateCheck;
- (void)_hideTitlebar;
- (char)_isTitleHidden;
- (char)_saveMode;
- (void)_setDefaultBridgeValues;
- (id)accessibilityIdentifier;
- (void)beginForDirectory:(id)a0 file:(id)a1 types:(id)a2 modelessDelegate:(id)a3 didEndSelector:(SEL)a4 contextInfo:(void *)a5;
- (void)configureContentView:(id)a0;
- (void)delegateRequestNewDocumentNameWithReply:(id /* block */)a0;
- (void)delegateShouldCreateNewDocumentAtURL:(id)a0;
- (id)filenames;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;
- (char)isMovable;
- (char)preventsApplicationTerminationWhenModal;
- (void)setContentTypeNames:(id)a0;
- (void)setCurrentContentType:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })startRectForSheet:(id)a0;
- (unsigned long long)styleMaskForHostWindow;

@end

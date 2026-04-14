@class NSArray;

@interface NSOpenPanel : NSSavePanel

@property (readonly, copy) NSArray *URLs;
@property BOOL resolvesAliases;
@property BOOL canChooseDirectories;
@property BOOL allowsMultipleSelection;
@property BOOL canChooseFiles;
@property BOOL canResolveUbiquitousConflicts;
@property BOOL canDownloadUbiquitousContents;
@property (getter=isAccessoryViewDisclosed) BOOL accessoryViewDisclosed;

+ (id)openPanel;

- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)isMovable;
- (BOOL)canBecomeMainWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })startRectForSheet:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
- (BOOL)_saveMode;
- (id)filenames;
- (BOOL)preventsApplicationTerminationWhenModal;
- (BOOL)_isTitleHidden;
- (void)beginForDirectory:(id)a0 file:(id)a1 types:(id)a2 modelessDelegate:(id)a3 didEndSelector:(SEL)a4 contextInfo:(void *)a5;
- (BOOL)_canAddUnderTitlebarViews;
- (void)delegateRequestNewDocumentNameWithReply:(id /* block */)a0;
- (void)delegateShouldCreateNewDocumentAtURL:(id)a0;
- (void)configureContentView:(id)a0;
- (void)_setDefaultBridgeValues;
- (unsigned long long)styleMaskForHostWindow;
- (void)commonPrep:(id /* block */)a0 runningAsASheet:(BOOL)a1 hostWindow_runningAsASheet:(BOOL)a2;
- (BOOL)_excludeFilesInEnableURLDelegateCheck;

@end

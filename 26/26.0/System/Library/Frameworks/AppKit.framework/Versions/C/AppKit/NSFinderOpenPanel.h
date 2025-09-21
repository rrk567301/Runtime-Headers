@interface NSFinderOpenPanel : NSFinderSavePanel

@property BOOL resolvesAliases;
@property BOOL canChooseDirectories;
@property BOOL allowsMultipleSelection;
@property BOOL canChooseFiles;
@property BOOL canResolveUbiquitousConflicts;
@property BOOL canDownloadUbiquitousContents;
@property (getter=isAccessoryViewDisclosed) BOOL accessoryViewDisclosed;

+ (id)openPanel;
+ (id)hostControllerInterface;
+ (id)objectExportedForController;
+ (id)targetControllerClassName;

- (id)filenames;
- (BOOL)isKindOfClass:(Class)a0;
- (id)URLs;
- (id)_securityScopedURLs;
- (BOOL)adaptAccessoryViewForOpen;
- (void)beginForDirectory:(id)a0 file:(id)a1 types:(id)a2 modelessDelegate:(id)a3 didEndSelector:(SEL)a4 contextInfo:(void *)a5;
- (void)beginSheetForDirectory:(id)a0 file:(id)a1 types:(id)a2 modalForWindow:(id)a3 modalDelegate:(id)a4 didEndSelector:(SEL)a5 contextInfo:(void *)a6;
- (long long)runModalForDirectory:(id)a0 file:(id)a1 types:(id)a2;
- (long long)runModalForTypes:(id)a0;

@end

@class NSTextField, NSMutableDictionary, NSMutableArray, NSTableView, NSButton, NSUserDefaults;

@interface SSFileTransferWindowController : NSWindowController <SSFileTransferTableCellViewDelegate> {
    NSMutableArray *fileTransferArray;
    long long rowPlusOneToMakeVisibleInAwakeFromNib;
}

@property (retain) NSUserDefaults *iconCacheUserDefaults;
@property NSTableView *tableView;
@property NSTextField *transferCountTextField;
@property NSButton *cancelAllButton;
@property (retain) NSMutableDictionary *iconCacheDict;

+ (id)sharedController;

- (oneway void)release;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)windowWillClose:(id)a0;
- (id)initWithWindow:(id)a0;
- (void)keyDown:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)clear:(id)a0;
- (void)windowDidLoad;
- (void)updateCount;
- (void)addFileTransfersFromArray:(id)a0;
- (void)addFileTransfer:(id)a0;
- (void)saveHistory;
- (id)iconForFilePath:(id)a0;
- (void)loadHistory;
- (void)removeFileTransfer:(id)a0;
- (void)removeFileTransfersFromArray:(id)a0;
- (void)addFileTransfersFromArray:(id)a0 saveHistory:(BOOL)a1 scrollToLastItem:(BOOL)a2;
- (void)saveIconCache;
- (BOOL)shouldShowCancelAllButton;
- (void)cancelAll:(id)a0;

@end
